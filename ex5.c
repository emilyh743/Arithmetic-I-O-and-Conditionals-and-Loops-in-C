#include <stdio.h>

int main()
{

int a, flag = 0;
int i;


while (a!= 0) {
   printf("Number ?\n");
   scanf("%d", &a);

   flag = 0;
 for (int b = 2; b <= a/2; b++) {
   if (a%b == 0) {
	flag = 1;
	i = b;
	break;
	}
 }
   if (a == 0) {
	printf("Done\n");
	return 0;
 }
	if (a == 1)
	printf("%d is non-prime (special case)\n", a);
	else if (flag == 0)
	printf("%d is a prime\n", a);
	else
	printf("%d is non-prime, divisible by %d\n", a, i);
}
}
