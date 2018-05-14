#include <stdio.h>

int main()
{
int i, b;
int a = 1;
int temp, flag;



while (a != 0) {
   printf("Number ?\n");
   scanf("%d", &a);

   if (a == 0) {
   printf("Done\n");
   return 0;
   }
   temp = a;
   flag = 0;

   i = 0;

 for (int b = 1; ;b*=2, i++) { 
   if (a == b) {
	printf("%d is a power of two (%d)\n", a, i);
	break;
   } else if (b > a) {
	printf("%d is not a power of two, between %d and %d\n", a, i-1, i);
	break;
   }
 }
 }
}
