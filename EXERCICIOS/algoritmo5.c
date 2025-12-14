#include <stdio.h>
#include <string.h>
#include <math.h>

/*
Escreva uma função que receba uma string de 0s e 1s, interprete essa string como
um número em notação binária (veja Seção C.1) e devolva o valor desse número.
*/

int PromptAndCheck(char *string, int len){

    printf("Enter binary string: ");
    fgets(string, len, stdin);
    string[strcspn(string, "\n")] = '\0';

    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] != '0' && string[i] != '1'){
            return 0;
        }
    }

    printf("\n");

    return 1;
}


void ConvertBinaryToDecimal(char *string){

    int result = 0;

    for (int i = 0; string[i] != '\0'; i++){
        result = result * 2 + (string[i] - '0');
    }

    printf("The binary number %s in decimal is: %d\n", string, result);
}

int main(){

    char binary[31];

    if (PromptAndCheck(binary, 31)){
        ConvertBinaryToDecimal(binary);
    }
    else{
        printf("Error! \n");
    }
}