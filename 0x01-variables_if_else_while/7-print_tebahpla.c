#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * mamin - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char vow;

	for (vow = 'z'; vow >= 'a'; vow--)
	{
		putchar(vow);
		if (vow !='z')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
