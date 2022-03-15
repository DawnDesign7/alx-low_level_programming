#include <stdio.h>
/**
 * main - Prints _putchar
 *
 * Description: prints _putchar followed by a newline
 *
 * Return: returns 0 (successful)
 */
int main(void)
{
	char text = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
