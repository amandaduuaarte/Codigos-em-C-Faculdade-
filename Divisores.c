#include <stdio.h>
   
int
main ()
{
    int num, aux, res;
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    if(num <= 0){
        printf("Não possui divisores.");
    }else{
        aux=1;
        while(aux<= num){
            res = num %aux; 
            if( res == 0){
                printf("Divisores: %d \n", aux);
            }
            aux = aux +1;
        }
    }
  return 0;

}
