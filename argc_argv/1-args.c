#include "main.h"

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument value
 * Return: 0 succes
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
