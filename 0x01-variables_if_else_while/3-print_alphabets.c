#include <stdio.h>

/**
 * main - To print an alphabet in lowercase
 * and then in upper case followed by a new line
 * Return: Always return 0.
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z') /*print uppercases A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
