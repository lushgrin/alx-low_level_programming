#include "main.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char kenneth[9] = {'k', 'e', 'n', 'n', 'e', 't', 'h'};
	unsigned int c;

	for (c = 0; c < sizeof(kenneth); c++)
	{
		_putchar(kenneth[c]);
	}
_putchar('\n');
return (0);
}
