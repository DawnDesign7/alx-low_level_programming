#include "main.h"

/**
 *_isalpha: check for alphabetic characters
 *
 * Description: checks for alpha
 *
 * return: 1 - alphabetic character 0 - otherwise
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
