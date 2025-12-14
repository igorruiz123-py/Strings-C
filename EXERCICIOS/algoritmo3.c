#include <stdio.h>
#include <string.h>

/*
Escreva uma função que receba uma string s e inteiros não negativos i e j e
devolva a string que corresponde ao segmento s[i..j]. Sua função não deve alocar
novo espaço mas pode alterar a string s que recebeu.
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(char *string, int *num1, int *num2){

    printf("Enter string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    FlushBuffer();

    printf("Enter num 1: ");
    if (scanf(" %d", num1) == 0){
        return 0;
    }

    FlushBuffer();

    printf("Enter num 2: ");
    if (scanf(" %d", num2) == 0){
        return 0;
    }

    FlushBuffer();

    return 1;
}

void segment(char *string, int *num1, int *num2){

    int k = 0;

    for (int i = *num1; i < *num2 && string[i] != '\0'; i++){
        string[k++] = string[i];
    }

    string[k] = '\0';

    for (int i = 0; string[i] != '\0'; i++){
        printf("array[%d] = %c \n", i, string[i]);
    }
    
}

int main(){

    char string[50];
    int num1 = 0;
    int num2 = 0;

    if (PromptAndCheck(string, &num1, &num2)){
        segment(string, &num1, &num2);
    }
    else{
        printf("Error!");
    }
}