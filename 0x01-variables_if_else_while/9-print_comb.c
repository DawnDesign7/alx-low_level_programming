#include <stdio.h>

/**
 * main - print all possibe combinations
 * Return: always 0 (Success)
 */
int main(void)
{
		int num;

		for (num = 0; num <= 9; num++)
		{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
