#include <stdio.h>

void incArray(int v[]){ // ou void incArray(int *v)
       int c;
       for (c = 0; c < 10; c++);
       	v[c++];
}	

int main(){
	int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	incArray(data);
	return 0;
}
