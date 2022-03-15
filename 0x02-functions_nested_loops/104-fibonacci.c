#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next = 0;

	for (i = 1; i < 98; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%ld, ", a);

		if (i == 97)
		{
			printf("%ld\n", a);
		}
	}
}
