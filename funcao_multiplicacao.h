#include <stdio.h>

int main() {
	double num1, num2, resultado;
	printf("--- Multiplicação da Calculadora ---\n");
	printf("Digite o primeiro número: ");
	scanf("%lf", &num1);
	printf("Digite o segundo número: ");
	scanf("%lf", &num2);
	resultado = num1 * num2;
	printf("\nResultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
	return 0;
}
