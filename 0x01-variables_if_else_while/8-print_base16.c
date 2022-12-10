#include <stdio.h>

int main(void) 
{
	int no = '0';
	char alp = 'a';

	while (no < 10)
	{
		putchar(no);
		no++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return(0);
}
