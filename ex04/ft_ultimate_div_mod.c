#include <unistd.h>

void    ft_putchar(char c) {
    write(1, &c, 1);
}

void    ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }
    if (nb < 10) ft_putchar(nb + 48);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
    int i;
    int j;
    
    i = *a / *b;
    j = *a % *b;
    
    *a = i;
    *b = j;
}

int main(void)
{
    int a;
    int b;
    
    a = 42;
    b = 8;
    
    ft_ultimate_div_mod(&a, &b);
    
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_putchar('\n');
    
    return 0;
}
