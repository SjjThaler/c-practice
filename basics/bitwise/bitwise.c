#include <stdio.h>

int main() {
	int a = 10;
	int b = 6;

	int or = a | b; //flip the third bit to add 4
	int and = a & b; //only the second bit is the same, so it's 2
	
	printf("%d\n", or);	
	printf("%d\n", and);
	return 0;
	}
