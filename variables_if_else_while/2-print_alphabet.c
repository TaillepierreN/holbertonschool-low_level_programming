#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}
