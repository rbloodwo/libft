#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;
	size_t len;

	i = 0;
	len = 0;
	while(s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}