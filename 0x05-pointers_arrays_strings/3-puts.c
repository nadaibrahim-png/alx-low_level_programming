#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 i* @s: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(str + i));
		i--;
	}
	_putchar('\n');
}
