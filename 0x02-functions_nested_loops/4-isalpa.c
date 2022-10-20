#include "main.h"

/**
 * _isalpha - checks for char is alphabet
 * @c: is the char to be checked
 *
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
