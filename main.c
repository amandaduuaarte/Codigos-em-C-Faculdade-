
#include <stdio.h>

  int calculoMedia(int n1, int n2)  //Função pra calcular a media.
    {
        
   int nota;     
   
   nota = (n1*3 + n2*2)/5;
   return nota;
    }
    int resultadoFinal (int md){
        if (md >= 6){
            printf("Aprovado(a)");
        }else{
            printf("reprovado");
        }
    }

    int main()
    {

    int a, b, mediaFinal, resultado, md;
        printf("Digite sua nota da primeira etapa : \n");
        scanf("%d", &a);
        printf("Digite sua nota da segunda etapa : \n");
        scanf("%d", &b);

        mediaFinal = calculoMedia(a,b); 

        printf("A sua nota n1 é : %d n2: %d e sua mediaFinal %d", a,b,mediaFinal); 
        
        resultado = resultadoFinal(mediaFinal);
    return 0;

    }
// Esse %d é para inteiros 