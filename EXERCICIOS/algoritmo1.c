#include <stdio.h>
#include <string.h>

/*
Qual o comprimento da string "x=%d\n"?
*/

int main(){

    char string[] = "x=%d\n";

    int len = strlen(string);

    printf("string len is %d \n", len);
}