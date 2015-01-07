// shows the precedence of the logical operators
#include <stdio.h>

int a = 5, b = 6, c =5, d =1;
int x;

int main()
{
	x = a < b || a < c &&  c < d;
	printf("\nwithout parentheses the expression evaluates as %d", x);
	//now with parentheses

	x = (a < b || a < c ) && c < d;
	printf("\nNow with parentheses the expression evaluates to: %d\n", x);
	return 0;
}
