
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char	*str;

	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') // moves i to first instance of a non whitespace
		i++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t') // moves j to last instance of a non whitespace char
		j--;
	while (k < j - i + 1)
	{
		str[k] = s[k + i];
		k++;
	}
	str[k] = '\0';
	return (str);
}
