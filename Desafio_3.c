#include <stdio.h>
#include <stdlib.h>
/* Funcao para verificar se um numero e primo*/
int e_primo (int n){
    int i;
    /*a partir de 2 se houver algum numero que divida n, n a nao sera mais primo*/
    for(i=2;i<n;i++){ 
        if (n%i==0){
            i=n; /*Condicao de parada se o n nao for primo*/
        }
    }
    /*Se for nao for primo i vai ser maior que n pois i = n entao ele sera
    icrementado e saira do looping. se for primo i sera menor que n*/
    if(i>n){
        return 0;
    }else{
        return 1;
    }
}
/*Funcao para somar os primos e obter o maior primo por soma de primos*/
int somar_Primos (int n){
    int i,x,soma=0;
    for(i=2;soma<n;i++){
        if(e_primo(i)){
            soma += i;
            if(e_primo(soma)){/*Se a soma dos primos for primo x recebe a soma*/
                x=soma;
            }
        }
    }
    if(x<n){
        return x;
    }else{
        return 0;
    }    
}
int main (){
    int n,rep=0;
    while(rep==0){
        system("cls");
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        printf("%d",somar_Primos(n));
        printf("\n Deseja conferir outro numero?");
        printf("\n  0 - SIM ou 1 - NAO.");
        scanf("%d", &rep);
        
    }
    
    return 0;
}