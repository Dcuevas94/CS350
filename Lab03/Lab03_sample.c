// CS 350, Fall 2014
// Lab 3 -- Sample program for argc/argv and file I/O
//
// Illinois Institute of Technology, (c) 2014, James Sasaki
//
#include <stdio.h>

int main (int argc, char *argv[])
{
	// First we print out the command line that we were executed with. 
	// argc has the number of words on the command line and argv[0], ...
	// contain the different words.  The name of the command (e.g.
	// a.out) is the initial word.
	//
	printf("The command line had %d part(s)\n", argc);
	int i;
	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

   // Now for something completely different: We open a file for input,
   // read from it, and then close it.
   //
	char *filename = "mydata.dat";		// file to read from
	FILE *in_file;
	in_file = fopen(filename, "r");		// NULL if the open failed

	// Read a sequence of numbers from the file
	//
	int nbr_read;	// # items read by fscanf; if zero, read failed
	int value_read;	
	nbr_read = fscanf(in_file, "%d", &value_read);
	while (nbr_read > 0) {
		nbr_read = fscanf(in_file, "%d", &value_read);
	}

	int close_err = fclose(in_file);	// yields false if the close succeeded
	return 0;
}
