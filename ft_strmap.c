#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int i;
	unsigned int len;
	char *str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	while(s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
