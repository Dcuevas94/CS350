// Daniel Cuevas
//compile with gcc filename.c -lm.)
// CS 350, Spring 2014
// Lab 1: Fix syntax & semantics errors

#include <stdio.h>	// to access printf, scanf

int main() {
	printf("CS 350 Lab 1 for %s\n\n", "Daniel Cuevas CS 350");

	int n = 5;
	int a[5] = {1, 3, 5, 7, 9};	// Declare & initialize array of length 5
	int sum;

	for (int i = 0; i < n; i++) {		// Sum up the 5 elements of the array
		sum = sum + a[i];
		printf("%d\n", sum );
	}
	printf("%d\n",sum );
	printf("Enter an integer x:");	// Prompt the user
	int x;
	scanf("%d", &x);					// Read in the integer

	// Print out the sum, the division we're performing, and the result (without truncation)
	// E.g., The sum of the array is 25; 25/2 = 12.500000
	//
	printf("The sum of the array is %d; %d/%d = %.5d\n", sum, sum, x, sum/x);
		
	// Declare an integer variable y and initialize it using a hexadecimal constant.
	// Print y in decimal, hex, and with leading zeros so that we get the output
	// y = 4011 = fab = 0xfab =   fab = 0000fab
	//
	int y = 0xfab;
	printf("y = %d = %x = %#01x = %x = 000%#x \n", y, y, y, y, y);
	printf("Done with this lab, not sure why the division isn't working\n");
	return 0;
}
