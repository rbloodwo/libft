#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
