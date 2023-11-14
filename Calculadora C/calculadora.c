#include <stdio.h>

int main() {
    char operador;
    int a, b, resultado;

    printf("========= CALCULADORA ========= \n");
    printf("Informe um dos seguintes operadores: \n");
    printf("+      Soma\n");
    printf("-      Subtracao\n");
    printf("*      Multiplicacao\n");
    printf("/      Divisao\n");
    printf("%%      Resto da Divisao\n");
    scanf("%c", &operador);

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    if (b == 0 && (operador == '/' || operador == '%')) {
        printf("Erro: Divisao por zero!\n");
        return 1;
    }

    if(operador == '+'){
        resultado = a + b;
        printf("O resultado da soma eh: %d", resultado);
    } else if(operador == '-'){
        resultado = a - b;
        printf("O resultado da subtracao eh: %d", resultado);
    } else if(operador == '*'){
        resultado = a * b;
        printf("O resultado da multiplicacao eh: %d", resultado);
    }else if(operador == '/'){
        resultado = a / b;
        printf("O resultado da divisao eh: %d", resultado);
    }else if(operador == '%'){
        resultado = a % b;
        printf("O resultado do resto da divisao eh: %d", resultado);
    }else{
        printf("Operador invalido!\n");
        return 1;
    }

    return 0;
}
