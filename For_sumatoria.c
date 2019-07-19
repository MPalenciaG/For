/*El bucle for

    for(inicializacion;condicion;incremento){
        instrucciones;
    }
*/

#include<stdio.h>

int main(){
    int i,e;
    printf("Desea el orden:\n1.Ascendente.\n2.Descendente.\n");
    scanf("%i",&e);
    if(e==1){
       for(i=1;i<=10;i++){
           printf("%i.\n",i);
       }
    }else if(e==2){
        for(i=10;i>=1;i--){
            printf("%i.\n",i);
        }
    }else{
        printf("No eligio una opcion valida");
    }
}
