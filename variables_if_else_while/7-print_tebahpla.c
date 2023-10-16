#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0 (success);
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
