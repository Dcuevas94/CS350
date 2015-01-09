/* Name:		find_nbr.c
 * Purpose:		Picks a random number and lets the user try to guess it
 * Returns:		Nothing :P
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define YES 1

int main(void)
{
	int guess_value = 0;
	int number;
	int nbrOfGuesses;
	int done = 0;

	printf("\n\nGetting a random number!\n");
	//Use the time to seed the random number generator
	srand((unsigned) time (NULL)/500);
	number = rand();
	nbrOfGuesses = 0;
	while(guess_value != number)
	{
		printf("%d",number);
		printf("\n%d Pick a number between 0 and %d > ", nbrOfGuesses, RAND_MAX);
		scanf("%d", &guess_value); //store the number
			
		nbrOfGuesses++;
		if( number == guess_value)
		{
			printf("You got it!");
			
		}
		else
		if (number < guess_value)
		{
			printf("\nYou guessed too high!");
		}
		else
		{
			printf("\nYou guessed too low!");
		}
	}
	printf("\n\nCongrats you guess right in %d Guesses!", nbrOfGuesses);
	printf("\n\nTHe number was: %d\n\n", number);
	return 0;
}
