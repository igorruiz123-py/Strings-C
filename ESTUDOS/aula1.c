#include <stdio.h>
#include <string.h>

// STRINGS

/*
Considere um vetor de caracteres que contém pelo menos uma ocorrência do
caractere nulo.

O segmento inicial do vetor que vai até primeira
ocorrência do caractere nulo é uma string, ou cadeia de caracteres.

O comprimento de uma string é o seu número de caracteres, sem contar o
caractere nulo final.

*/

int main(){

    // Montando um vetor de chars
    char array[] = {'i', 'g', 'o', 'r', '\0'};

    for (int i = 0; array[i] != '\0'; i++){
        printf("array[%d] = %c \n", i, array[i]);
    }

    printf("\n");

    // Montar um vetor de char vindo do teclado
    char name[50];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("\n");

    for (int i = 0; name[i] != '\0'; i++){
        printf("array[%d] = %c \n", i, name[i]);
    }
}