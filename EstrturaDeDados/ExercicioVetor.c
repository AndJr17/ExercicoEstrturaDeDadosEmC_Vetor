#include <stdio.h>

int main()
{
    int numeros[5];
    int i, contador = 0;
    
    for(i = 0; i < 5; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for(i = 0; i < 5; i++) {
        if(numeros[i] > 100) {
            contador++;
        }
    }
    
    printf("Foram digitados %d números maiores que 100.\n", contador);

    return 0;
}