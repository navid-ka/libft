
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptrs[i++] = (unsigned char)c;
	}

	return (ptrs);
}
