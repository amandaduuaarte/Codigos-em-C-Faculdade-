
#include <stdio.h>
#include <math.h>
    int x1 (int n1, int n2,int r){
        int x1, x2;
        x1 = ((-n2 +r)/(2*n1));
        return x1;
    }
      int x2 (int n1, int n2,int r){
        int x2;
        x2 = ((-n2-r)/(2*n1));
        return  x2; 
    }
    
    int main()
    {

    int a, b, c, resultadoFinalx1,resultadoFinalx2, delta, raiz ;
        printf("Digite o valor de a da equacao : \n");
        scanf("%d", &a);
        printf("Digite o valor de b da equacao: \n");
        scanf("%d", &b);
        printf("Digite o valor de c da equacao: \n");
        scanf("%d", &c);
          
           delta = (b*b) - (4*a*c);
           
           raiz = sqrt(delta);
        
        if (a != 0)
        {
            resultadoFinalx1 = x1(a,b,raiz);
            resultadoFinalx2 = x2(a,b,raiz);
           printf("Valor x1 \n :%d e valor de x2 \n:  %d" , resultadoFinalx1,  resultadoFinalx2);
        }else{
            printf("Não é equação do 2 grau");
        };
    return 0;

    }