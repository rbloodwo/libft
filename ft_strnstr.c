#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t i;
	size_t x;

	i = 0;
	while (str[i] != '\0' && i < len)
	{
		x = 0;
		while (to_find[x] == str[i + x])
		{
			if (to_find[x + 1] == '\0')
			{
				return (str + i);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}
