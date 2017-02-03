#include <stdio.h>

int main() {
    int a,suma=0;
    scanf("%d",&a);
    while (a>0){
        suma+=a%10;
        a=a/10;
    }
    printf("%d",suma);
    return 0;
}