#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <libft.h>

void ft_ischeck(int c, int(*f)(int), char *name)
{
	if (f(c) == 1)
		printf("\033[0;32mTest of %s returned [√]\n\033[m", name);
	else
		printf("\033[0;31mTest of %s returned [X]\n\033[m", name);
}

int main(void)
{
	int testnb;
	int testn;
	char testc;

	testnb = 9;
	testn = '9';
	testc = 'a';
    printf("\033[0;36m<<TEST CHECKING... \n");
	// ISALPHA
	ft_ischeck(testc, &ft_isalpha, "ft_isalpha");
	ft_ischeck(testc, &isalpha, "isalpha");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISDIGIT
	ft_ischeck(testn, &ft_isdigit, "ft_isdigit");
	ft_ischeck(testn, &isdigit, "isdigit");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISASCII
	ft_ischeck(testn, &ft_isascii, "ft_isascii");
	ft_ischeck(testn, &isascii, "isascii");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISALNUM
	ft_ischeck(testnb, &ft_isalnum, "ft_isalnum");
	ft_ischeck(testnb, &isalnum, "isalnum");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISPRINT
	ft_ischeck(testc, &ft_isprint, "ft_isprint");
	ft_ischeck(testc, &isprint, "isprint");

	return (0);
}