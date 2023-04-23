#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <libft.h>
#include <stdlib.h>
#include <string.h>

void ft_ischeck(int c, int(*f)(int), int(*f2)(int), char *name, char *name2)
{
	if (f(c) == f2(c))
		printf("\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;31mTest of %s failed [X]\n\033[m", name);
}

void ft_ischeckstr(char *c, int(*f)(char *), int(*f2)(char *), char *name, char *name2)
{
	if (f(c) == f2(c))
		printf("\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;31mTest of %s failed [X]\n\033[m", name);
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

	printf("\033[0;36m<<TEST CHECKING... \n");
	// ISALPHA returns non-zero value if true mine returns true isalpha returns 1024
	ft_ischeck(testc, &ft_isalpha, &isalpha, "ft_isalpha", "isalpha");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISDIGIT
	ft_ischeck(testnb, &ft_isdigit, &isdigit,  "ft_isdigit", "isdigit");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISASCII
	ft_ischeck(testn, &ft_isascii, &isascii, "ft_isascii", "isascii");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISALNUM
	ft_ischeck(testnb, &ft_isalnum, &isalnum, "ft_isalnum", "isalnum");
	printf("\033[0;36m<<TEST CHECKING... \n");
	//ISPRINT returns non-zero value if true mine returns 1 the isprint number 16384
	ft_ischeck(testc, &ft_isprint, &isprint, "ft_isprint", "isprint");
	printf("\033[0;36m<<TEST CHECKING... \n");
	// TOUPPER
	ft_ischeck(testc, &ft_toupper, &toupper, "ft_toupper", "toupper");
	printf("\033[0;36m<<TEST CHECKING... \n");
	// TOLOWER
	ft_ischeck(testc, &ft_tolower, &tolower, "ft_tolower", "tolower");

	//STRLEN
	//ft_ischeckstr(testd, &ft_strlen, &strlen, "ft_strlen", "strlen");
	//ATOI
	//ft_ischeckstr((char *)testd, &ft_atoi, &atoi, "ft_atoi", "atoi");
	char str[10] = {'1','2','1','5','6'};
	int moi;
	int moi2;
	moi = atoi(str);
	printf("%d \n",moi);
	moi2 = ft_atoi(str);
	printf("%d \n",moi2);

	return (0);
}