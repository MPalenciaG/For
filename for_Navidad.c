//crear un arbol de navidad
#include<stdio.h>
int main(){
    int i,n;
    printf("Defina el numero de filas: ");scanf("%i",&n);
    for(i=n;i>=1;i--){
        printf(" ");
        for(i=1;i<=n;i++){
            printf("*");
        }

    }
}
