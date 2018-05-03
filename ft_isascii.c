#include "libft.h"
/*
The isascii() function tests for an ASCII character, 
which is any character between 0 and decimal 127 inclusive.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}