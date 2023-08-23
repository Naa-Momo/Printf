#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints an array of string characters
 * @str: the variable to print
 *
 */

int print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
#include <limits.h>
#include <stdio.h>

/**
 * _printf - Produces output according to a format
 * @format: The format of the string.
 * Return: The number of characters printed
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int j = 0, n = 0;

	va_start(ap, format);
	while (format[j] != '\0')
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (format[j] == '%')
		if (*p == '%')
		{
			switch (format[j + 1])
			p++;
			if (*p == '%')
			{
				case 'c':
					_putchar(va_arg(ap, int));
					n++;
					break;
				case 's':
					n += print_string(va_arg(ap, char *));

					break;
				case '%':
					_putchar('%');
					n++;
					break;
				count += _putchar('%');
				continue;
			}

			j++;
		}
		else
		{
			_putchar(format[j]);
			n++;
		}
		j++;
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	va_end(ap);
	return (n);
	_putchar(-1);
	va_end(arguments);
	return (count);

}
