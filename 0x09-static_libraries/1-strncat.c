#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: char to check
 * @src: char to check
 * @n: int to check
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
