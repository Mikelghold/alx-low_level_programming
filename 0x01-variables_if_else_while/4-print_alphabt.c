#include <stdio.h>

/**
 * main - Print all alphabets except q and e
 * Return: Always return 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z');
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	
	return (0);
}
