#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

int main (){
    char s[MAX], m[MAX];
    int i;
    do{
        printf("Inserire un nome: ");
        gets(s);
    }while(strlen(s) > MAX);

    strcpy(m,s);

    for(i = 0; i < strlen(m); i++){
        m[i] = tolower(m[i]);
    }
    
    printf("Il nome finale e' ");
    puts(m);
}
