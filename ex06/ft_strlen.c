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

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    char    *str;
    int     a;
    str = "amin amin";
    a = ft_strlen(str);
    ft_putnbr(a);
    ft_putchar('\n');
    
    return 0;
}
