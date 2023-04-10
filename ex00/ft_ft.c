#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    a = 12;
    
    ft_ft(&a);
    write (1, &a, 2);
    return 0;
}
