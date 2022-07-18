#include <stdio.h>

int main() {
	    int a, b; // comma operator
		printf("input a : ");
		scanf("%d", &a);
		printf("input b : ");
		scanf("%d", &b);
		if (a > b) { // change the condition you want. > >= < <= == !=
				printf("a is bigger than b\n");
				printf("(a > b) = %d\n", a > b);
		}
		else {
				printf("a is not bigger than b\n");
				printf("(a > b) = %d\n", a > b);
		}
		return 0;
}