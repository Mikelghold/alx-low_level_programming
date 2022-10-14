#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabet a-z
 * Return: Always return 0.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
