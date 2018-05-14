#include <stdio.h>

int main ()
{
int a, b;

printf("Please enter a number from 1 to 5:\n");
scanf("%i", &a);

if (a >= 1 && a <= 5) {
	for (int b = 1; b <= a; b++) {
	printf("%i Hello World\n", b);
	}
//	printf("%i Hello World\n", a);
   } else {
	printf("Number is not in the range from 1 to 5\n");
   }
}


