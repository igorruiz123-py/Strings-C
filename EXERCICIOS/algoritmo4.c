#include <stdio.h>
#include <string.h>

/*
Escreva uma função que receba uma string e imprima o número de ocorrências
de cada caractere na string. Escreva um programa para testar sua função.
*/

int FillString(char *string, int len){

    printf("Enter string: ");
    fgets(string, len, stdin);
    string[strcspn(string, "\n")] = '\0';

    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] >= '0' && string[i] <= '9'){
            return 0;
        }
    }

    return 1;
}

void CounteChars(char *string){

    // Todas as posições do vetor será no inicio zero.
    // 256, pois a tabela ASCII vai de 0 a 255, ou seja ela possui 256 elementos
    char buffer[256] = {0};

    for (int i = 0; string[i] != '\0'; i++){
        // variável "c" assume uma possição no vetor
        unsigned char c = string[i];
        // soma-se 1 na posição do char atual para calcular sua frequência no vetor
        buffer[c]++;    
    }

    for (int j = 0; j < 256; j++){
        if (buffer[j] > 0){
            printf("The character %c appears %d times in the string! \n", j, buffer[j]);
        }
    }

}

int main(){

    char string[50];

    if (FillString(string, 50)){
        CounteChars(string);
    }
    else{
        printf("Error! \n");
    }
}