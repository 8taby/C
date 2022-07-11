#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
		int month = 10;
		int day = 15;
		int stID;
		char string[50] = "Hello, World!\n";
		char string1[50] = {'H','e','l','l','o',',',' ','W','o','r','l','d','!','\n'};
		char string2[50] = {'H','e','l','l','\0',',',' ','W','o','r','l','d','!','\n'};
        printf("Hello, World!\n");
		printf("My Birthday is %d / %d\n", month, day);
		printf("What is your student ID?\n");
		scanf("%d", &stID);
		printf("Your student ID is %d\n", stID);
		printf("%s", string);
		printf("%s", string1);
		printf("%s", string2);
    return 0;
}