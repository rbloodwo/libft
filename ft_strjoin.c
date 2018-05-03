#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	char	*str;

	i = 0;
	j = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[j + i] = s2[j];
		i++;
	}
	str[j + i] = '\0';
	return(str);
}
