// program to calculate the prodcut of two numbers
//
#include <stdio.h>
int val1, val2, val3;
int prodcut(int x, int y);
int main( void )
{
	// Get the first number
	printf("Enter a number between 1 and 100: ");
	scanf("%d", &val1);

	// Second number
	printf("\nEnter another number between 1 and 100: ");
	scanf("%d", &val2);

	// calculate the product and display is
	val3 = product(val1, val2);
	printf("%d times %d = %d\n", val1, val2, val3 );
	return 0;
}
//product fucntion
int product(int x, int y)
{
	return (x * y);
}