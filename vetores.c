
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v [10];
    int indice, maior, menor, d;
     printf("Escreva 10 números inteiros \n");
    for(indice=0; indice <10; indice++){
       scanf("%d",&v[indice]);
    }
    maior = v[0];
    
    for(indice=1; indice<10;indice++){
        if(v[indice]>maior){
           maior= v[indice];
       }
    }
       printf("Maior valor %d\n", maior);
    
    menor = v[0];
    
    for(indice=1; indice<10;indice++){
        if(v[indice]<menor){
           menor= v[indice];
       }
    }
       printf("Menor %d\n", menor);
      
      d = maior- menor;
       printf(" Diferença entre eles: %d\n", d);

       system("pause");
}
