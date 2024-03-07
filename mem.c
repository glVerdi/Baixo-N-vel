#include <stdio.h>
#include <stdbool.h>

int main(){
	char A = 'A';
	char a = 'a';
	char *d = &A;
	short s;
	int b = 10;
	int *c = &b;
	long l;
	float e = 3.2;
	double e = 3.2;
	bool f;
	char *g; //String, cada byte eh um caracter, toda string termina com 0, tem que coloca-lo no final

	printf("A: %d\n", A);
	printf("a: %d\n", a);
	printf("A: %c\n", A);
	printf("a: %c\n", a);
	printf("&A: %p\n", &A);
	printf("&a: %p\n", &a);
	printf("size A: %d\n", sizeof(A));
	printf("size b: %d\n", sizeof(b));
	printf("size c: %d\n", sizeof(c));
	printf("size d: %d\n", sizeof(d));
	printf("end A: %p\n", &A);
	printf("end b: %p\n", &b);
	printf("end c: %p\n", &c);
	printf("end d: %p\n", &d);
	printf("%d\n%d\n%d\n", sizeof(s), sizeof(b), sizeof(l));
	return 0;
}
