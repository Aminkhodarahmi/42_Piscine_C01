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

void    ft_swap(int *a, int *b)
{
    int i;
    
    i = *a;
    *a = *b;
    *b = i;
}

int main(void)
{
    int a;
    int b;
    
    a = 42;
    b = 12;
    ft_swap(&a, &b);
    ft_putnbr(a);
    return 0;
}
