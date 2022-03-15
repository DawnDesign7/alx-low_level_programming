#include "main.h"

/**
 * print_alphabet - prints a-z
 *
 * Description: prints alphabet in lowercase
 *
 * Return : void
 *
 */
void alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
