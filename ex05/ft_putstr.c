#include <unistd.h>

void    ft_putchar(char c) {
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(void)
{
    char *ptr;
    char tab[6];
    char ar[7];
    
    ar[6] = 'f';
    tab[0] = 't';
    tab[1] = 'o';
    tab[2] = 't';
    tab[3] = 'i';
    tab[4] = 'o';
    tab[5] = '\0';
    ptr = "Amin pppp";
    ft_putstr(ptr);
    ft_putstr(tab);
    ft_putstr(ar);
    
    return 0;
}
