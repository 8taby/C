#include <stdio.h>

int countTo1(int num, int step, int direction){   
	if direction == 1 { // going down
		printf("%d is bigger than 1, going down!\n", num);
  	num = num - step;
 	  step = step * 2;
	  countTo1(num, step, (1 < num));
	}	else if direction != 1 {
		if (1 > num) { // going up
			printf("%d is smaller than 1, going up!\n", num);
  		num = num - step;
 	  	step = step * 2;
	  	countTo1(num, step, (1 < num));
		} else { // same
			printf("%d is 1!\n", num);
			break
		}
}

int main() {
   int a;
   scanf("%d", &a);   
   printf("%d\n", countTo1(a, 1, (1 < a)));   
   return 0;
}
