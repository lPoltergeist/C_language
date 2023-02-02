#include <stdio.h>

int main(void){
    int fatorial(int x);
    int numero, resultado;

    printf("digite um numero inteiro\n");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial e \n %i", resultado);

    return 0;
}

int fatorial(int x) {
    int resultado;

    if(x == 0) {
        resultado = 1;
    } else {
        resultado = x * fatorial(x - 1);

    }
    return resultado;
}

