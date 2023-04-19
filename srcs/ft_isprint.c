static int	ft_isspace(int c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\v') || (c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

int	ft_isprint(int c) {
	if (c >= 33 && c <= 126 && !ft_isalnum(c) && !ft_isspace(c))
        return 1;
    else
        return 0;
}
