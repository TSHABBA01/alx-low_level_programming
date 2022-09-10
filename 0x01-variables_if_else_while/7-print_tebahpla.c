#include <stdio.h>
/**
 * main - script to rev alphabet
 *
 * Return: Always (success)
 */
int main(void)
{
	char r;

	for (r = 'Z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
