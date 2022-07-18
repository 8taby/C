#include <stdio.h>

int main() {
		int a = 32;
		int b = 12;
		int add, sub, mul, div, mod;
		add = a + b; // addition
		sub = a - b; // subtraction
		mul = a * b; // multiplication
		div = a / b; // division
		mod = a % b; // modulus
		
		printf("a + b = %d\n", add);
		printf("a - b = %d\n", sub);
		printf("a * b = %d\n", mul);
		printf("a / b = %d\n", div);
		printf("a %% b = %d\n", mod);

		return 0;
}