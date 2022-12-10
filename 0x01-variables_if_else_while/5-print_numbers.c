#include <stdio.h>

/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */

int main(void)
{
	int no = 0;

	while (no < 10) 
	{
		printf("%i", no);
		no++;
	}

	putchar ('\n');
	return(0);
}
