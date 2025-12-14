#include <stdio.h>
#include <string.h>

/*
Escreva uma função que receba um caractere c e devolva uma string que tem c
como único elemento.
*/

void TurnCharIntoString(char *c){

    char string[] = {*c, '\0'};

    for (int i = 0; string[i] != '\0'; i++){
        printf("array[%d] = %c \n", i, string[i]);
    }
}

int CheckChar(char *c){

    char buffer[10];

    printf("Enter char: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    if (strlen(buffer) != 1){
        return 0;
    }

    *c = buffer[0];

    return 1;
}

int main(){

    char c;

    if (CheckChar(&c)){
        TurnCharIntoString(&c);
    }
    else{
        printf("Error! \n");
    }
}