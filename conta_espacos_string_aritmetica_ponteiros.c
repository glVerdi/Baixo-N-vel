#include <stdio.h>

int main(){
	int count_spaces(const char *s)
	{
 	int count = 0;
 	for (; *s != '\0'; s++)
 		if (*s == ' ')
 		count++;
 	return count;
	}
}
