#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints size of various types on the computer it is compiled
* Return: 0
*/
int main(void)
{
	char red;
	int blue;
	long green;
	long long yellow;
	float cyan;

	printf("Size of a char: %ld byte(s)\n", sizeof(red));
	printf("Size of an int: %ld byte(s)\n", sizeof(blue));
	printf("Size of a long int: %ld byte(s)\n", sizeof(green));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(yellow));
	printf("Size of a float: %ld byte(s)\n", sizeof(cyan));
	return (0);
}
