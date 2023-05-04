#include "libft.h"

void *ft_calloc(size_t number, size_t size)
{
    void    *ptr;

    ptr = malloc(number * size);
    if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
    ft_memset(ptr, 0, number * size);
    return (ptr);
}