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
        if(m[i] >= 65 && m[i] <= 90){
            m[i] = m[i] + 32;
        }
    }
    
    printf("Il nome finale e' ");
    puts(m);
}
