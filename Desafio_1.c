#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Essa funcao aceita tanto caracteres maiusculos como minusculos*/
int ScoreLetra(char letra){
    int valor;
    switch (letra){
    case ('A'):
    case ('E'):
    case ('I'):
    case ('O'):
    case ('U'):
    case ('L'):
    case ('N'):
    case ('R'):
    case ('S'):
    case ('T'):
    case ('a'):
    case ('e'):
    case ('i'):
    case ('o'):
    case ('u'):
    case ('l'):
    case ('n'):
    case ('r'):
    case ('s'):
    case ('t'):
        valor = 1;
        break;
    case ('D'):
    case ('G'):
    case ('d'):
    case ('g'):
        valor = 2;
        break;
    case ('B'):
    case ('C'):
    case ('M'):
    case ('P'):
    case ('b'):
    case ('c'):
    case ('m'):
    case ('p'):
        valor = 3;
        break;
    case ('F'):
    case ('H'):
    case ('V'):
    case ('W'):
    case ('Y'):
    case ('f'):
    case ('h'):
    case ('v'):
    case ('w'):
    case ('y'):
        valor = 4;
        break;
    case ('K'):
    case ('k'):
        valor = 5;
        break;
    case ('J'):
    case ('X'):
    case ('j'):
    case ('x'):
        valor = 8;
        break;
    case ('Q'):
    case ('Z'):
    case ('q'):
    case ('z'):
        valor = 10;
        break;
    default:
        printf("Nao e um caracter valido.");
        break;
    }
    return valor;
}

int main (){
    int i,valor,rep=0;
    char* palavra= malloc(sizeof(char)*50); // Variavel para receber a palavra menor de 50 letras;
    while(rep==0){
        valor=0;
        system("cls");
        printf("Digite uma palavra: ");
        fflush(stdin);
        gets(palavra); //Recebe a palavra
        for (i=0;i<strlen(palavra);i++){//Percorre o tamanho da palavra
            valor = valor + ScoreLetra(palavra[i]);//Vê o score letra por letra.
        }
        printf("%d\n",valor); // printa o valor.
        printf("\n Deseja conferir outra palavra?");
        printf("\n  0 - SIM ou 1 - NAO.");
        fflush(stdin);
        scanf("%d", &rep);

    }
    return 0;
}