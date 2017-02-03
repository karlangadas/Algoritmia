#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[30],str2[30];
   
    scanf("%s %s",str1,str2);
   
    int n=strcmp(str1,str2);
    printf("%d ",n);
    if (n==0)
    	printf("Iguales\n");
    else
    	printf("Diferentes\n");
    return 0;
}