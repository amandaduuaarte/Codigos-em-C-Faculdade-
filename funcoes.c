#include <stdlib.h>
#include <stdio.h>
int soma (int s1, int s2){
    return s1 + s2;
}
int subtracao (int s1, int s2){
    return s1 - s2;
}
int mutiplicacao (int m1, int m2){
    int valor;
    valor = m1*m2;
    return valor;
}
int fatorial (int v1){
    if (v1<0)
    {
    return -1;
    }
    if(v1 ==0 || v1 ==1)
    return 1; 
    
    int aux, fat;
    fat = v1;
    aux= fat-1;
    
    while(aux> 1){
        fat = fat*aux;
        aux --;
    }
    
    return fat;
}
int divisao (int d1, int d2){
    int valor;
    valor = d1/d2;
    return valor;
}
int main()
{
    int res, a, b;
    printf("Digite o valor de N1 : \n");
    scanf("%d", &a);
    printf("\nDigite o valor de N2 : \n");
    scanf("%d", &b);
    
    res = soma (a,b);
    printf("Valor da soma desses valores é : %d \n", res);
    res = subtracao (a,b);
    printf("Valor da subtração desses valores é : %d \n", res);
    res = mutiplicacao (a,b);
    printf("Valor da multiplicação desses valores é : %d \n", res);
    res = fatorial (a);
    printf("Valor da fatorial de %d  é : %d \n", a, res);
    res = fatorial (b);
    printf("Valor da fatorial de %d  é : %d \n", b, res);
    res = divisao (a,b);
    printf("Valor da divisão desses valores é : %d \n", res);
   
   system("pause");
}
