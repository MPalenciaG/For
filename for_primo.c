#include<stdio.h>

int main(){
    int i,n,c=0;
    printf("Digite un numero: ");scanf("%i",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>2){
        printf("\nEl numero es compuesto");
    }
    else{
        printf("\nEl numero es primo");
    }
    return 0;
}
