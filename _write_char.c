#include "main.h"
/**
  * _write_char - writes the character c to stdout
  * @c: the character to print
  * Return: on success 1.
  * on error, -1 errno set appropriately
  */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
