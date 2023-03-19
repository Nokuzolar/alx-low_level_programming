#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Retyrn: Always 0 (Sucess)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	 return (0);
}

