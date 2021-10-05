#include "main.h"
/**
  * _printf - produces ouput according to a format
  * by selecting the correct function to print.
  * @format: character string. Format string is composed
  * of zero or more directives
  * Return: number of characters printed(excluding the null
  * byte used to end output to strings
  */
int _printf(const char *format, ...)
{
        char buffer[1024];
        int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", format_u},
		{"o", format_o},
		{"x", format_x},
		{"X", format_X},
		{"r", format_r},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
