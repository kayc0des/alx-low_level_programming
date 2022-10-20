#include "main.h"
/**
 * _isdigit - checks if a number is a digit
 * @c: variable to compare
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if ( c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
