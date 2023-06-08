/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:42:54 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/06/08 16:47:04 by nkeyani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_check_format(const char *format, va_list args, int *ret)
{
	int	check;

	check = 0;
	if (*format == 'c')
		check += ft_printc((char)va_arg(args, int));
	else if (*format == 's')
		check += ft_prints(va_arg(args, char *));
	else if (*format == 'p')
		check += ft_printp(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		check += ft_printid(va_arg(args, int));
	else if (*format == 'u')
		check += ft_printu(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	{
		if (*format == 'x')
			check += ft_printhex(va_arg(args, unsigned int), \
			"0123456789abcdef");
		if (*format == 'X')
			check += ft_printhex(va_arg(args, unsigned int), \
			"0123456789ABCDEF");
	}
	*ret = check;
	return (check);
}

static int	ft_parse_format(const char *format, va_list args, int *ret, int i)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format)
				&& ft_check_format(format, args, ret) != -1)
				i += *ret;
			else if (*format == '%' && ft_printc('%') != -1)
				i++;
			else
				return (-1);
		}
		else
		{
			if (ft_printc(*format) != -1)
				i++;
			else
				return (-1);
		}
		format++;
	}
	*ret = i;
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				ret;

	ret = 0;
	va_start(args, format);
	if (ft_parse_format(format, args, &ret, 0) == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (ret);
}
