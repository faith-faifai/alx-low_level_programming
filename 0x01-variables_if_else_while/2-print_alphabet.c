#include <stdio.h>

/**
 * Main - Prints the alphabet
 *
 * Return: Always 0 (Sucess)
 *
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return (0);
}
