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

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 67;
    b = 13;
    ft_div_mod(a, b, &d, &c);
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(d);
    ft_putchar('\n');
    
    return 0;
}
