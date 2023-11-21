#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_char - fun of printing char
 * @list: list of char
 * Return: return the nr of elements
 */
int p_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
