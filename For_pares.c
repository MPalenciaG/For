//Suma numeros pares

#include<stdio.h>
int main(){
    int i,n,suma=0;
    printf("Hasta que numero desea sumar?\n");scanf("%i",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            suma=suma+i;
        }
    }
    printf("La suma de los pares es: %i.\n",suma);

    return 0;
}
