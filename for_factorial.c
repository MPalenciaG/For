#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("Digite el numero para hallar el factorial: ");scanf("%i",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("\nEl factorial del numero %i es %i",n,f);

    return 0;
}
