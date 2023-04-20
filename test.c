#include <stdio.h>
#include <unistd.h>
#include "includes/libft.h"

void ft_ischeck(int c, int(*f)(int), char *name)
{
	if (f(c) == 1)
		printf("Test of %s passed [√]", name);
	else
		printf("Test of %s didn't pass [X]", name);
}

int main(void)
{
	int testn;
	char testc;

	testn = 9;
	testc = 'm';
    printf("<<TEST CHECKING..");
	ft_ischeck(testn, &ft_isalpha, "ft_isalpha");

	return (0);
}