#include <stdio.h>
#include <string.h>

// STRINGS CONSTANTES

/*
Para especificar uma string constante, basta embrulhar uma sequência de caracteres
num par de aspas duplas.

char *s;
s = "ABC";

*/

int CountVows(char *arr){

    int counter = 0;

    char vows[] = "aeoiuAEIOU";

    for (int i = 0; arr[i] != '\0'; i++){
        for (int j = 0; vows[j] != '\0'; j++){
            if (arr[i] == vows[j]){
                counter++;
            }
        }
    }

    return counter;
}

int main(){

    char array[50];
    int counter = 0;

    printf("Enter phrase: ");
    fgets(array, sizeof(array), stdin);
    array[strcspn(array, "\n")] = '\0';

    printf("\n");

    counter = CountVows(array);

    printf("Number of vows is %d \n", counter);
}