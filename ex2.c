#include <stdio.h>

int main ()
{

float a, b, c, d, e, sum, min, max, num, product;

printf("Enter five floating-point numbers:\n");
scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

max = min = num;

sum = a + b + c + d + e;
product = a * b * c * d * e;

	if (a < b && a < c && a < d && a < e)
	   min = a;
	else if (b < a && b < c && b < d && b < e)
	   min = b;
	else if (c < a && c < b && c < d && c < e)
	   min = c;
	else if (d < a && d < b && d < c && d < e)
	   min = d;
	else if (e < a && e < b && e < c && e < d )
	   min = e;
	if (a > b && a > c && a > d && a > e)
	   max = a;
	else if (b > a && b > c && b > d && b > e)
	   max = b;
	else if (c > a && c > b && c > d && c > e)
	   max = c;
	else if (d > a && d > b && d > c && d > e)
	   max = d;
	else if (e > a && e > b && e > c && e > d)
	   max = e;

printf("Sum is %3.4f\n", sum);
printf("Min is %3.4f\n", min);
printf("Max is %3.4f\n", max);
printf("Product is %3.4f\n", product);
}
