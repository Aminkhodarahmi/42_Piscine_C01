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

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int *********a = NULL;
    *********a = 12;
//    ft_ultimate_ft(&a);
    ft_putnbr(*********a);
    
    return 0;
}
