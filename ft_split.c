#include "libft.h"

static void ft_foreach(size_t *tab, size_t length, void(*f)(char *))
{
    size_t i;

    i = 0;
    while (i < length)
        (*f)((char*)(tab[i++]));
}

static void ft_writelen(char *str)
{
    write(1, str, ft_strlen(str));
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  i;
    size_t  slen;

    slen = ft_strlen(s);
    arr = (char **)malloc((slen + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    i = 0;
    while (i < slen)
    {
        arr[i] = ft_strtrim(s, &c);
        s += ft_strlen(arr[i]);
        i++;
    }
    arr[i] = NULL;
    ft_foreach((size_t *)arr, i, (void (*)(char *))ft_writelen);
    return (arr);
}