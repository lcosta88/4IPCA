#include <stdio.h>

int main() {    
    double a, b, resultado; //A palavra-chave double é um tipo de dados que armazena números fraccionários.
    int opcao;

    printf("Escolha uma opcao:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    scanf("%d", &opcao);

    printf("Introduza dois* numeros: ");
    scanf("%lf %lf", &a, &b);

    switch (opcao) { //Em vez de escrever muitas instruções if..else, podemos utilizar a instrução switch. Seleciona um de muitos blocos de código a ser executado:
        case 1:
            resultado = a + b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            resultado = a / b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        default: 
              printf("escolha inválida");
    }
    
        
    return 0;
    
}