
#include <stdio.h>

int main()
{
    int num, cont = 0, valores;
    printf("Digite um valor para iniciar a contagem:\n");
    scanf("%d", &num);
    
    while(cont < 10 ){
        cont ++; 
        num ++;
        printf("Números: %d \n", num);
        valores = num;
    }
    if (num < num-1){
        valores = num -1;
        printf("Maior é: %d", valores);
    }else{
        valores = num;
        printf("Maior: %d", valores);
    }
    
    return 0;
}
