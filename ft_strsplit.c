
#include "libft.h"

static unsigned int		wordcount(char const *s, char c) // KEEP
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char 	*ft_strndup(const char *s, size_t n) // KEEP
{
	char *dest;

	dest = (char *)malloc(sizeof(char) * n + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_strncpy(dest, s, n);
	dest[n] = '\0';
	return (dest);
}

char 	**ft_strsplit(char const *s, char c) // KEEP
{
	int i;
	int j;
	int k;
	char **str;

	i = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * (wordcount(s,c)) + 1);
	if (str == NULL)
		return (NULL);

	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i > j) // maybe if (i >= j)
		{
			str[k] = ft_strndup(s + j, i - j);
			k++;
		}
		str[k] = NULL;
	}
	return (str);
}
