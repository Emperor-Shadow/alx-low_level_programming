#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
        char one = 'a';
	char two = 'A';

        while (one <= 'z')
        {
                putchar(one);
                one++;
        }
	while (two <= 'Z')
	{
		putchar(two);
		two++;
	}
        putchar ('\n');
        return (0);
}
