// print_it.c
// prints out a listing with line numbers
// Ha, did it better than the book, no % error at the end
// Reads a "c" file or any ".ext" file and spits out the
// code it contains. doesn't work for compiled programs obviously.
//
#include <stdio.h>
#include <stdlib.h>

void do_heading(char *filename);
int line = 0, page = 0;

int main(int argv, char *argc [] )
{
	char buffer[256];
	FILE *fp;

	if (argv<2)
	{
		fprintf(stderr, "\nProper usage is: " );
		fprintf(stderr, "\n\nprint_it filename.exe\n" );
		return(1);
	}
	if ((fp = fopen(argc[1], "r")) == NULL)
	{
		fprintf(stderr, "Error opening file, %s!\n", argc[1] );
		return(1);
	}

	page = 0;
	line = 1;
	do_heading( argc[1] );
	while( fgets( buffer, 256, fp ) != NULL)
	{
		if (line % 55 == 0)
		{
			do_heading(argc[1]);
		}
		fprintf(stdout, "%4d:\t%s", line++, buffer );
	}
	fprintf(stdout, "\f\n" );
	fclose(fp);
	return 0;
}

void do_heading(char *filename)
{
	page++;
	if(page>1)
		fprintf(stdout, "\f\n" );
	fprintf(stdout, "page: %d, %s\n\n", page, filename );
}