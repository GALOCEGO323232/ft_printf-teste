#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    char *null_str = NULL;

    ret1 = ft_printf("ft_printf char: %c\n", 'Z');
    ret2 = printf("printf    char: %c\n\n", 'Z');

    ret1 = ft_printf("ft_printf string: %s\n", "Hello, ft_printf!");
    ret2 = printf("printf    string: %s\n\n", "Hello, ft_printf!");

    int x = 12345;
    ret1 = ft_printf("ft_printf pointer: %p\n", &x);
    ret2 = printf("printf    pointer: %p\n\n", &x);

    ret1 = ft_printf("ft_printf int: %d\n", 2025);
    ret2 = printf("printf    int: %d\n\n", 2025);

    ret1 = ft_printf("ft_printf negative int: %i\n", -2025);
    ret2 = printf("printf    negative int: %i\n\n", -2025);

    ret1 = ft_printf("ft_printf unsigned: %u\n", 4294967295u);
    ret2 = printf("printf    unsigned: %u\n\n", 4294967295u);

    ret1 = ft_printf("ft_printf hex lowercase: %x\n", 305441741);
    ret2 = printf("printf    hex lowercase: %x\n\n", 305441741);

    ret1 = ft_printf("ft_printf hex uppercase: %X\n", 305441741);
    ret2 = printf("printf    hex uppercase: %X\n\n", 305441741);

    ret1 = ft_printf("ft_printf percent: %%\n");
    ret2 = printf("printf    percent: %%\n\n");

    // Testa string NULL só no ft_printf (printf padrão pode falhar)
    ret1 = ft_printf("ft_printf null string: %s\n", null_str);

    ret1 = ft_printf("ft_printf null pointer: %p\n", NULL);
    ret2 = printf("printf    null pointer: %p\n\n", NULL);

    // Evita warnings de variáveis não usadas
    (void)ret1;
    (void)ret2;

    return 0;
}




