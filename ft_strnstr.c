#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*haystack;
	char		*needle;


	i = 0;
	haystack = (char *)big;
	needle = (char *)little;
	if (!*needle)
		return((char*)big);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && i + j < len && haystack[i + j] == needle[j])
				j++;
			if (!(needle[j]))
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
