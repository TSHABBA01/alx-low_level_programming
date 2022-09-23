#include "main.h"
/**
 * _strcat - a function that concatenates teo strings
 * @dest: first variable
 * @src: second variable
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i, w;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (w = 0; src[w] != '\0'; w++, i++)
	{
		dest[i] = src[w];
	}
	return (dest);
}

