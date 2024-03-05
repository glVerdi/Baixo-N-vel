#include <stdio.h>

int main(){
	int valor1, valor2, soma;
	printf("Somar dois inteiros\n");
	printf("Digite o primeiro valor: \n");
	scanf("%d",&valor1); 
	printf("Digite o segundo valor: \n");
	scanf("%d", &valor2);
	soma = valor1 + valor2;
	printf("A soma de: %d e %d eh: %d\n", valor1, valor2,soma);
       return 0;	
}
