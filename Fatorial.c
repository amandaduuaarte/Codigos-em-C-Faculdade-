
#include <stdio.h>

int main()
{
    int n, fatorial, aux;
    printf("Digite o valor de N: \n");
    scanf("%d", &n);
    
    if(n<0)
        printf("N %d não possui fatorial", n);
        else 
            if (n==0 || n ==1)
            printf("%d ! = 1", n);
            
            else{
                fatorial =n;
                
                for(aux = n-1; aux>1; aux = aux-1){
                    fatorial = fatorial*aux;
                }
                printf("%d ! = %d", n, fatorial);
            }
    return 0;
}
