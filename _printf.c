#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - printing all
 * @format: format
 * Return: return the value of printed characters
 */
int _printf(const char *format, ...)
{
	int counter;
	va_list arg;
	int i, j;

	print_t p_functions[] = {{"c", p_char}, {"s", p_str}, {NULL, NULL}, 
