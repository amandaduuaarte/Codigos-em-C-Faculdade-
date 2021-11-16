#include <stdio.h>

int kelvinFunction (int temp){
    int temperatura = temp - 273;
    
    printf("A temperatura %d em celsius é : %d° ", temp, temperatura);
    return temperatura;
}
int FahrenheitFunction (int temp){
    int temperaturaF = (temp - 32)*5/9;
    printf("\n A temperatura %d em celsius é : %d° ", temp, temperaturaF);
}
int main() // Conversor de Kelvin e fahrenheit para celsius;
{
    int kelvin, fahrenheit;
    printf("Digite a temperatura em Kelvin:\n");
    scanf("%d", &kelvin);
    
    printf("Digite a temperatura em fahrenheit: \n");
    scanf("%d", &fahrenheit);
    
    kelvinFunction(kelvin);
    FahrenheitFunction(fahrenheit);
    return 0;
}
