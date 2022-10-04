#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: variable to insert
 * Return: NULL if size is 0
 * pointer to array if everthing is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (0);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
