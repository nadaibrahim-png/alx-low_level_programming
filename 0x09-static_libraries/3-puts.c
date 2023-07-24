#include "main.h"

/**
 * _puts - prints a string in stdout in reverse
 * @str: string to print
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
