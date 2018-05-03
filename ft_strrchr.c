
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	int len;

	str = (char *)s;
	len = 0;
	while (*str != '\0') // sets str to end of string
	{
		str++;
		len++;
	}
	while (*str != (char)c && len > 0) // work backwards to find last occurence
	{
		if (*str == (char)c)
			return (str);
		str--;
		len--;
	}
	if (*str == (char)c)
			return (str);
	return (NULL);
}
