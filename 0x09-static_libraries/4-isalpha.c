#include "main.h"
#include <stdio.h>

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
