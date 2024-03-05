#include <stdio.h>

int main(){
	float valor1, valor2, soma;
	printf("Somar dois reais\n");
	printf("Digite o primeiro valor: \n");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &valor2);
	soma = valor1 + valor2;
	printf("A soma de: %.2f e %.2f eh: %.2f\n", valor1, valor2, soma);
	return 0;
}
