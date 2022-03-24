#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/*Como o desafio possue um alto numero de processo (10.000) para melhorar o desempenho do codigo,
realizei o loop até "aproximadamente" a raiz do numero +1, ja que os numeros possuem divisores 
"espelhados" se ele possuir 1 divisor menor que sua raiz quadrada ele tera outro divisor acima 
da raiz (sem contar com o numero um)*/
int quantidade_Divisores (int n){ // calcula quantidade de divisores de um numero
    int i,b,x=2;
    float a=sqrt(n); // recebe a raiz inteira de um numero
    b =(int)floor(sqrt(n)); // recebe a raiz arredondada para baixo
    for(i=2;i<b+1 ;i++){ // vai até a raiz quadrada do número + 1;
        if(n%i==0){  // se for divisivel
            x += 2; // logo x incrementa 2 o i e o i referente maior que a raiz.
        }
    }
    if (a==b){ // se for um quadrado perfeito é necessario tirar 1 do contador. Pois sua raiz apenas contara 1 vez já quu sera seu divisor tambem.
        x--;
    }
    return x;
}


int main (){
    int i=1,j=2,a,b;    
    for(i=1;i<10000;i++){
        a = quantidade_Divisores(i);
        b = quantidade_Divisores(i+1);
        if(a==b){
            printf("%d\n",i);
        }
    }
    system("pause");
    return 0;
}