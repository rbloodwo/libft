#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t i;
	char *s;

	i = 0;
	s = (char *)src;
	while (i < n)
	{
		if (s[i] == (char)c)
			return(s + i);
		i++;
	}
	return (NULL);
}
