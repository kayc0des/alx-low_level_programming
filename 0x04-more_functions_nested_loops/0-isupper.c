#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char c;

	if (c = 'A')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (1);
	} else 
	{
		printf("%c: %d\n", c, _isupper(c));
		return (0);
	}
	return (0);
}
