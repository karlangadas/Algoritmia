#include <stdio.h>
#include <string.h>//Importante para strings
int main(void) {
    char string[30];
    //gets(string); <-También funciona, pero usa más para leer toda una oración hasta salto de línea
    scanf("%s\n",string);
   
    for (int i=0;i<strlen(string);i++){
        string[i]=tolower(string[i]);
    }
    printf("%s\n",string);
   
    return 0;
}