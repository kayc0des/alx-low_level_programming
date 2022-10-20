#include "main.h"
#include <stdio.h>
/**
 * _isupper - entry point
 * @c: character to compare
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	return (0);
}
