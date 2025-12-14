#include <stdio.h>
#include <string.h>

// BIBLIOTÉCA STRING

/*
A biblioteca string (não confunda com a biblioteca strings) da linguagem C
contém várias funções de manipulação de strings. Para ter acesso à biblioteca,
o seu programa deve incluir o arquivo-interface string.h
*/

// STRLEN()

/*
A função strlen (o nome é uma abreviatura de string length) recebe uma
string e devolve o seu comprimento. O código da função poderia ser escrito
assim:

unsigned int strlen (string s) {
    int i;
    for (i = 0; s[i] != '\0'; i++) ;
    return i;
}
*/

// STRCPPY

/*
A função strcpy (abreviatura de string copy) recebe duas strings e copia a
segunda (inclusive o caractere nulo final) para o espaço ocupado pela primeira.
O conteúdo original da primeira string é perdido. O usuário só deve invocar
esta função se souber que o espaço alocado para a primeira string é suficiente
para acomodar a cópia da segunda.1 O código dessa função poderia ser escrito
assim:

string strcpy (string s, string t) {
    int i;
    for (i = 0; t[i] != '\0'; i++) s[i] = t[i];
    s[i] = '\0';
    return s;
}
*/

// STRCMP()

/*
A função strcmp (abreviatura de string compare) da biblioteca string faz
a comparação lexicográfica de duas strings. Ela devolve um número negativo se
a primeira string for lexicograficamente menor que a segunda, devolve 0 se as
duas strings são iguais e devolve um número positivo se a primeira string for
lexicograficamente maior que a segunda.
*/

int StrlenVariant(char *string){
    
    int i;;

    for (i = 0; string[i] != '\0'; i++);

    return i;
}

int main(){

    // STRLEN()
    char string[] = "string";
    int len = strlen(string);

    printf("String length: %d \n", len);

    int variantelen = StrlenVariant(string);

    printf("String length: %d \n", variantelen);

    printf("\n");

    // STRCPY()
    char stringcopy[] = "copied";

    strcpy(string, stringcopy);

    printf("string: %s \n", string);

    // STRCMP()
    char s1[] = "hello";
    char s2[] = "hello";
    char s3[] = "world";
    char s4[] = "hell";

    printf("Comparando '%s' e '%s': %d\n", s1, s2, strcmp(s1, s2)); // Retorna 0 (iguais)
    printf("Comparando '%s' e '%s': %d\n", s1, s3, strcmp(s1, s3)); // Retorna negativo (h < w)
    printf("Comparando '%s' e '%s': %d\n", s3, s1, strcmp(s3, s1)); // Retorna positivo (w > h)
    printf("Comparando '%s' e '%s': %d\n", s1, s4, strcmp(s1, s4)); // Retorna positivo (fim de s4 antes de s1)
}