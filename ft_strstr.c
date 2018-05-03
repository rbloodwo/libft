#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;
	while (str[i] != '\0')
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
