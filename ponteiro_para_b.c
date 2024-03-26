#include <stdio.h>

int main(){
	int b = 200;
	int *a = &b; // a armazena o endereço de b
	printf("valor de b: %d\n", b);
	printf("valor de a: %p\n", a);
	printf("conteudo apontado por a: %d", *a);
	return 0;
}
