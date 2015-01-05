// sizeOf.c
// Tells the size of the C variable
//
#include <stdio.h>

int main(void)
{     
	printf("\nA char                is: %d bytses", sizeof(char) );
	printf("\nAn int                is: %d bytses", sizeof(int) );
	printf("\nA short               is: %d bytses", sizeof(short) );
	printf("\nA long                is: %d bytses", sizeof(long) );
	printf("\nA long long           is: %d bytses", sizeof(long) );
	printf("\nAn unsigned char      is: %d bytses", sizeof(unsigned char )); 
	printf("\nAn unsigned int       is: %d bytses", sizeof(unsigned int  ));
	printf("\nAn unsigned short     is: %d bytses", sizeof(unsigned short));
	printf("\nAn unsigned long      is: %d bytses", sizeof(unsigned long )); 		
	printf("\nAn unsigned long long is: %d bytses", sizeof(unsigned long long )); 
	printf("\nA float               is: %d bytses", sizeof(float )); 
	printf("\nA double              is: %d bytses", sizeof(double )); 
	printf("\nA long double         is: %d bytses\n", sizeof(long double )); 
	return 0;
}