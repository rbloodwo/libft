#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	int len;
	char *str;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	while(s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
