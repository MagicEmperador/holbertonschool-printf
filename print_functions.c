#include "main.h"

/**
 * p_char - function to print char
 * @list: list of char
 * Return: return the number of elements
*/
int p_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * p_str - function to print string
 * @list: list of string
 * Return: return the number of elements
*/
int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * p_int_rec - print int digits
 * @n: number
 * @count: digits counter
 * Return: return the digits counter
*/
int p_int_rec(long int n, int count)
{
	int nr_digits = count;

	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	if (n / 10)
	{
		nr_digits = p_int_rec(n / 10, count + 1);
	}
	_putchar(n % 10 + '0');
	return (nr_digits);
}

/**
 * p_int - print int
 * @list: list of elements
 * Return: return the value
*/
int p_int(va_list list)
{
	long int n;

	n = va_arg(list, int);
	if (n < 0)
		return (p_int_rec(n, 2));
	return (p_int_rec(n, 1));
}

/**
 * p_percent - function of printing percent character
 * @format: a pointer to the character string
 * Return: return the percent character
*/
void p_percent(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			_putchar('%');
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(args);
}
