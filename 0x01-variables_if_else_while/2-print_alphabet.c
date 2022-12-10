#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char one = 'a';
	while (one <= 'z')
	{
		putchar(one);
		one++;
	}
	putchar('\n');
	return(0);
}
