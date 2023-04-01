#include "../includes/push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	substring = (char *)malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (i < len && s[start] != '\0')
		{
			substring[i] = s[start];
			i++;
			start++;
		}
		substring[i] = '\0';
	}
	else
		substring[0] = '\0';
	return (substring);
}

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*final_str;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	final_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!final_str)
		return (NULL);
	while (i < len_s1)
		final_str[j++] = s1[i++];
	i = 0;
	while (i < len_s2)
		final_str[j++] = s2[i++];
	final_str[j] = '\0';
	free((char *)s1);
	return (final_str);
}

int	count_string(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

void	fill_s(char **dest, char const *s, char c, int words_nbr)
{
	int	i;
	int	j;
	int	count_char;

	i = 0;
	j = 0;
	while (j < words_nbr)
	{
		while (s[i] && s[i] == c)
			i++;
		count_char = 0;
		while (s[i] && s[i] != c)
		{
			count_char++;
			i++;
		}
		dest[j] = ft_substr(s, (i - count_char), count_char);
		j++;
	}
	dest[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		count_s;

	if (!s)
		return (NULL);
	count_s = count_string(s, c);
	dest = malloc(sizeof(char *) * count_s + 1);
	if (!dest)
		return (NULL);
	fill_s(dest, s, c, count_s);
	return (dest);
}