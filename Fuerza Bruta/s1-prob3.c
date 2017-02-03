#include <stdio.h>

int main() {
    int i,a,suma=0;
    scanf("%d",&a);
    for (i=0;i<=a;i++)
        suma+=i;//Es igual que: suma=suma+i;
    printf("%d",suma);
    return 0;
}