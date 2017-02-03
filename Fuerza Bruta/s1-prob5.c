#include <stdio.h>
 
int main(void) {
    int arr[101];//Suele ponersele uno o dos más de los que te piden
    int cant,max=0,num,ans=0;
    scanf("%d %d",&num,&cant);
    for (int i=0;i<cant;i++){
    	scanf("%d",&arr[i]);
        if (arr[i]>max)
            max=arr[i];
       
        if (arr[i]==num)
            ans++;
    }
    printf("El máximo número es: %d y el %d se repite %d veces\n",max,num,ans);
    return 0;
}