#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>=b)
        printf("La resta de %d y %d es %d",a,b,a-b);
    else
        printf("La división de %d entre %d es %d",a,b,a/(float) b);
    return 0;
}