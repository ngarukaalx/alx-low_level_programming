#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  a function that prints anything.
 * @format:list of arguments
 *
 * Return:different formats
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char c;

	int i;

	float f;

	char *s;

	const char *p = format;

	va_start(args, format);

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);

				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);

				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);

				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;

			default:
				break;
		}
		p++;
		if (*p != '\0' && (*p == 'c' || *p == 'i' ||
					*p == 'f' || *p == 's'))
		{
			printf(", ");
		}
	}
	va_end(args);

	printf("\n");
}

