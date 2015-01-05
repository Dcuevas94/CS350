// listing example, using if statements
//
#include <stdio.h>

int x, y;
int main(void)
{
	//input the data
	printf("Input an integer value for x: ");
	scanf("%d", &x);

	printf("\nInput an integer value for y: ");
	scanf("%d", &y);

	//test the values
	if(x == y)
		printf("x is equal to y\n");
	if(x > y)
		printf("x is greater than y\n");
	if(x < y)
		printf("x is smaller than y\n");
	return 0;
}