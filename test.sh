clear
make
gcc -Wall -Wextra -Werror istest.c -o istest -L./ -lft libft.a -I./includes
./istest
make fclean
rm istest