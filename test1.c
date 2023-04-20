#include <ctype.h>
#include <stdio.h>
int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
}

/* Esta es la función que ejecuta las pruebas */
void run_tests(void)
{
    /* Prueba 1: Un carácter que es una letra */
    char c1 = 'A';
    if (ft_isalpha(c1) == isalpha(c1))
        printf("Prueba 1: [OK]\n");
    else
        printf("Prueba 1: [ERROR]\n");

    /* Prueba 2: Un carácter que no es una letra */
    char c2 = '1';
    if (ft_isalpha(c2) == isalpha(c2))
        printf("Prueba 2: [OK]\n");
    else
        printf("Prueba 2: [ERROR]\n");

    /* Prueba 3: Un carácter en minúscula que es una letra */
    char c3 = 'z';
    if (ft_isalpha(c3) == isalpha(c3))
        printf("Prueba 3: [OK]\n");
    else
        printf("Prueba 3: [ERROR]\n");

    /* Prueba 4: Un carácter en mayúscula que no es una letra */
    char c4 = '@';
    if (ft_isalpha(c4) == isalpha(c4))
        printf("Prueba 4: [OK]\n");
    else
        printf("Prueba 4: [ERROR]\n");
}

/* Función principal del programa */
int main(void)
{
    run_tests(); /* Ejecuta las pruebas */
    return 0;
}