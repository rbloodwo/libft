#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char	*sub;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
