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
//ATOI
void ft_ischeckstr(const char *str, int(*f)(const char *), int(*f2)(const char *), char *name, char *name2)
{
	if (f(str) == f2(str))
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;31mTest of %s failed [X]\n\033[m", name);
}
//STRLEN
void ft_ischecksizet(const char *str, size_t(*f)(const char *), size_t(*f2)(const char *), char *name, char *name2)
{
	if (f(str) == f2(str))
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;31mTest of %s failed [X]\n\033[m", name);
}
//STRDUP
void ft_ischeckchr(char *str, char *(*f)(const char *), char *(*f2)(const char *), char *name, char *name2)
{
	if (strcmp(f(str), f2(str)) == 0)
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;32mTest passed of %s is equal to %s [√]\n\033[m", name, name2);
	else
		printf("\033[0;36m<<TEST CHECKING... \n\033[0;31mTest of %s failed [X]\n\033[m", name);
}
// strchr
void ft_ischeckstrchr(char *str, int c, char *(*f)(const char *, int), char *(*f2)(const char *, int), char *name, char *name2)
{
	if (f(str, c) == f2(str, c))
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
	printf("\n");
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
	char str[] = "        -12345";
	ft_ischeckstr(str, &ft_atoi, &atoi, "ft_atoi", "atoi");
	int a = ft_atoi(str);
	int b = atoi(str);
	printf("%d\n%d\n", a, b);

	//STRLEN WIP look what is t_size
   	ft_ischecksizet(str, &ft_strlen, &strlen, "ft_strlen", "strlen");

	//STRDUP 
 	//char* testd = "a";
	char* teststr = "Hello, world!";

	ft_ischeckchr(teststr, ft_strdup, strdup, "ft_strdup", "strdup");

	//STRCHR
	ft_ischeckstrchr(teststr, testn, ft_strchr, strchr, "ft_strchr", "strchr");
	ft_ischeckstrchr(teststr, testn, ft_strrchr, strrchr, "ft_strrchr", "strrchr");
	printf("%s\n", ft_strrchr("Hola que tal", 'a'));
	
	//STRNCMPT TODO
	//printf("%d", ft_strncmp("test", "", 0));

	//char c[500] = "elpacoesuncabron";
	//char c4[500] = "un";
	//printf("\n\ntest memmove   %s\n ", memmove(c+3, c4, 20));
	

	//printf("%s\n", ft_memmove(c+3, c4, 20));
	

	char c[500] = "elpacoesuncabron";
    char c4[500] = "un";
    char *trimmed = ft_strtrim(c, c4);
    if (trimmed != NULL)
    {
        printf("%s\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Error: ft_strtrim returned NULL\n");
    }
	

 	//printf("\nla original %lu", strlcat(((void *)0), beee, 2));
 	//printf("\n la mia%zu", ft_strlcat(((void *)0), beee, 2));

	char c42[500] = " el    paco es un cabron";
	ft_split(c42, 65);
	printf("%s", c42);
	free(c42);

 return 0;
}
