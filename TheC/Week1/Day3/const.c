// const.c shwos the use of const and define
//
#include <stdio.h>
#define GRAMS_PER_POUND 454
const int TARGET_YEAR = 2010;
long weightInGrams, weightInPounds;
int yearOfBirth, ageIn2010;

int main(void)
{
	printf("Enter your weight in pounds: ");
	scanf("%ld", &weightInPounds);
	printf("Enter your year of birth: ");
	scanf("%d", &yearOfBirth);

	//do the conversions
	weightInGrams = weightInPounds * GRAMS_PER_POUND;
	ageIn2010 = TARGET_YEAR - yearOfBirth;

	// display the results
	printf("\nYour weight in grams: %ld", weightInGrams);
	printf("\nIn 2010 you will be %d years old\n", ageIn2010);
	return 0;
}