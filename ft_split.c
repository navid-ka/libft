#include "libft.h"

static void ft_foreach(void **tab, size_t length, void(*f)(void *))
{
    size_t i;

    i = 0;
    while (i < length)
        (*f)(tab[i++]);
}

static void ft_strfree(void *str)
{
    free((char **)str);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  i;
    size_t  slen;

    slen = ft_strlen(s);
    arr = ft_calloc((slen + 1), sizeof(char *));
    if (!arr)
        return (NULL);
    i = 0;
    while (i < slen)
    {
        arr[i] = ft_strtrim(s, &c);
        i++;
    }
    arr[i] = NULL;
    ft_foreach((void **)arr, slen, ft_strfree);
    return (arr);
}