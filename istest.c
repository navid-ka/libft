#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <libft.h>
#include <stdlib.h>
#include <string.h>

void ft_ischeck(int c, int(*f)(int), int(*f2)(int), char *name, char *name2)
{
	if (f(c) == f2(c))
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;31mTest of %s failed [X]\n\033[m", name);
}

void ft_ischeckstr(const char *str, int(*f)(const char *), int(*f2)(const char *), char *name, char *name2)
{
    if (f(str) == f2(str))
        printf("\033[0;36m<<TEST CHECKING... \n\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
    else
        printf("\033[0;36m<<TEST CHECKING... \n\033[0;31mTest of %s failed [X]\n\033[m", name);
}

int main(void)
{
	int testnb;
	int testn;
	char testc;
	//const char testd[200] = "9";

	testnb = 9;
	testn = '9';
	testc = 'a';

	// ISALPHA returns non-zero value if true mine returns true isalpha returns 1024
	ft_ischeck(testc, &ft_isalpha, &isalpha, "ft_isalpha", "isalpha");
	//ISDIGIT
	ft_ischeck(testnb, &ft_isdigit, &isdigit,  "ft_isdigit", "isdigit");
	//ISASCII
	ft_ischeck(testn, &ft_isascii, &isascii, "ft_isascii", "isascii");
	//ISALNUM
	ft_ischeck(testnb, &ft_isalnum, &isalnum, "ft_isalnum", "isalnum");
	//ISPRINT returns non-zero value if true mine returns 1 the isprint number 16384
	ft_ischeck(testc, &ft_isprint, &isprint, "ft_isprint", "isprint");
	// TOUPPER
	ft_ischeck(testc, &ft_toupper, &toupper, "ft_toupper", "toupper");
	// TOLOWER
	ft_ischeck(testc, &ft_tolower, &tolower, "ft_tolower", "tolower");


	//ATOI
	char str[] = "12345";
    ft_ischeckstr(str, &ft_atoi, &atoi, "ft_atoi", "atoi");
	//STRLEN WIP look what is t_size
   	//ft_ischeckstr(str, &ft_strlen, &strlen, "ft_strlen", "strlen");

	return (0);
}