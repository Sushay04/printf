#include "main.h"

/**
 * _printf - print stuff to standard outfput
 * @format: string to print
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int numofchar = 0, i = 0;
	va_list strlist;

	if (format == NULL)
		return (-1);

	va_start(strlist, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			numofchar++;
		}
		else
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(strlist);
				return (-1);
			}

			if (format[i] == 'c')
			{
				char current = va_arg(strlist, int);

				write(1, &current, 1);
				numofchar++;
			}

			else if (format[i] == 'd' || 'i')
			{
				int digits = va_arg(strlist, int);
				int digitlength = 0;
				char *convdigit = inttostr(digits);

				while (convdigit[digitlength] != '\0')
					digitlength++;

				write(1, convdigit, digitlength);
				numofchar += digitlength;
			}

			else if (format[i] == 's')
			{
				char *word = va_arg(strlist, char*);
				int lengthofstring = 0;

				while (word[lengthofstring] != '\0')
					lengthofstring++;

				write(1, word, lengthofstring);
				numofchar += lengthofstring;
			}
			else if (format[i] == '%')
			{
				write(1, &format[i], 1);
				numofchar++;
			}
		} i++;
	}
	va_end(strlist);

	return (numofchar);
}
