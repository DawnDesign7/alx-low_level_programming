#include "main.h"

/**
 * _isalpha -Check for alphabetic characters
 *
 * Description: checks for alpha
 *
 * Return: 1 - alphabetic character 0 - otherwise
 *
 * @c: input
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
