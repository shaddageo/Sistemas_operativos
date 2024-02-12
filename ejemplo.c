#include <stdio.h>

int main(){
    float base, altura, a;
    float resultado, b;

    printf("Ingrese el area de la base del triangulo \n");
    scanf ("%f", &base);
    printf("Ingrese la altura del triangulo \n");
    scanf("%f", &altura);
    a = base * altura;
    b = a / 3; 
    resultado = (float)b;

    printf("El area del triangulo es: \n %f", resultado);
    return 0;
}