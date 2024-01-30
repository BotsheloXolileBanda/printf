#include "main.h"

/**
  * _printf - Prints formatted output.
  *
  * @format: String containg specifiers.
  * @...: Variadic function symbol.
  * Return: THe number of chars outputted.
  */
int _printf(const char *format, ...)
{
	va_list agms;
	char bufmem[1024];
	char *sstr;
	int x = 0;
	int rcrd = 0;

	va_start(agms, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				bufmem[x++] = va_arg(agms, int);
				if (x == 1024)
				{
					rcrd += x;
					clean_bufmem(bufmem, &x);
				}
			}
			else if (*format == '%')
			{
				bufmem[x++] = '%';
				if (x == 1024)
				{
					rcrd += x;
					clean_bufmem(bufmem, &x);
				}
			}
			else if (*format == 's')
			{
				sstr = va_arg(agms, char *);
				while (*sstr)
				{
					bufmem[x++] = *sstr;
					sstr++;
				}
				if (x == 1024)
				{
					rcrd += 1024;
					clean_bufmem(bufmem, &x);
				}
			}
		}
		else
		{
			bufmem[x++] = *format;
			if (x == 1024)
			{
				rcrd += x;
				clean_bufmem(bufmem, &x);
			}
		}
		format++;
	}
	rcrd += x;
	clean_bufmem(bufmem, &x);

	return (rcrd);
	va_end(agms);
}
