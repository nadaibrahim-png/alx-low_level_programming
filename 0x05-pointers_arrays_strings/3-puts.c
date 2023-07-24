#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 i* @s: string to print
 *
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
