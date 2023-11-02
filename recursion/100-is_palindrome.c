#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - return if string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
	int value;

	value = 0;
	check_palindrome(s, length, (length / 2), 0, &value);
	return (value);
}

/**
 * check_palindrome - check if string is palindrome
 * @s: string to check
 * @length: length of the string
 * (used to check last char,then -1 to one before last etc)
 * @middle: middle of string
 * (used to stop the check, if it reached the middle,word is palindrome)
 * @i: index to check first char and so on
 * @value: adress of the value change to return 1 or 0 if palindrome or not
 */

void check_palindrome(char *s, int length, int middle, int i, int *value)
{
	if (i == middle)
		*value = 1;
	else if (s[i] == s[length - 1] && i != middle)
		check_palindrome(s, length - 1, middle, i + 1, value);
}

