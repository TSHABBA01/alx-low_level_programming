#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
