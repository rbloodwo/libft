#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] ==  (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
