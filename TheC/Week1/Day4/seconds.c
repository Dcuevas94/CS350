// Seconds.c
//
#include <stdio.h>

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600
unsigned seconds, minutes, hours, secsLeft, minsLeft;

int main(void)
{
	printf("Enter number of seconds (<65000): ");
	scanf("%d", &seconds);

	hours = seconds / SECS_PER_HOUR;
	minutes = seconds / SECS_PER_MIN;
	minsLeft = minutes % SECS_PER_MIN;
	secsLeft = seconds % SECS_PER_MIN;

	printf("%u seconds is equal to: ", seconds);
	printf("%u hours, %u minutes and %u seconds\n", hours, minsLeft, secsLeft);
	return 0;
}