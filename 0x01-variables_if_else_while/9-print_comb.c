#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, g;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (g = 'a'; g <= 'f'; g++)
		putchar(g);
	putchar('\n');

	return (0);
}
