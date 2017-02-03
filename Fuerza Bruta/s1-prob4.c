#include <stdio.h>
 
int main(void) {
    int n, i,primo=1;
    scanf("%d",&n);
    if (n<2){
        printf("No es primo\n");
        return 0; //Significa que aquí acaba el programa
    }
    //no se pondría else porque la única forma de que llegue aquí es
    //que no haya cumplido con el if (entonces no es necesario)
    for (i=2;i<n;i++)
        if ((n%i)==0)
            break;
   
    if (i==n)
        printf("Es primo\n");
    else
        printf("No es primo\n");
    return 0;
}