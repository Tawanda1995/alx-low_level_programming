#include "main.h"

/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c);
{
	char *buffer;
	unsigned int position;

if (size == 0)
{
	return (null);
}
else
{
	position = 0;
	while (position < size)
	*(buffer + position) = c;
	position++;
}

return (buffer);
}

