#include<stdio.h>
int main(){
    int i,n,x=0,y=1,z;
    printf("Digite el numero de elementos: ");scanf("%i",&n);
    printf("1. 1\n");
    for(i=1;i<=n;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%i. %i\n",i+1,z);
    }
    return 0;
}
