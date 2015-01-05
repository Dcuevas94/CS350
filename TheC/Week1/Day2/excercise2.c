// Excercise 2 day 2
//
#include <stdio.h>

void display_line(void);

int main(void)
{
	display_line();
	printf("\nTeach yourself C in 21 days!\n");
	display_line();
	return 0;
}

//line of asterisk
//
void display_line(void)
{
	int counter;
	for (counter = 0; counter <30; counter++)
		printf("*");
}
//end of program