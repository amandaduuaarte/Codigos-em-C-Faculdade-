
#include <stdio.h>

int main()
{
    int n1,maior, cont;
    printf("Digite a idade da primeira pessoa: \n");
    scanf("%d", &n1);
    if(n1>=18){
        printf("\nPessoa 1 maior de idade com %d anos\n", n1);
    }
    
    for(cont=1; cont<10; cont++ ){
        printf("Digite a idade da outra pessoa:%d\n", cont+1);
         scanf("%d", &n1);
         
         if(n1>=18){
             printf("\nPessoa %d maior de idade com %d anos\n", cont+1, n1);
         }
    }
    return 0;
}
