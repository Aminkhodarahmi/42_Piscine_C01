#include <stdio.h>
void ft_rev_int_tab(int *tab)
{
	int i;
	int j;
	int k;
	
	i = 0;
	j = 0;
	while (tab[i])
	{
		i++;
	}
i--;
	while (j < i)
	{
		k = tab[j];
		tab[j] = tab[i];
		tab[i] = k;
		j++;
		i--;
	}
}

int main(void)
{
	int tab[6];
	int i = 0;
	
	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = '3';
	tab[4] = '4';
	tab[5] = '\0';

			while (tab[i])
	{
		printf("%c", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab);

i = 0;
		while (tab[i])
	{
		printf("%c", tab[i]);
		i++;
	}
	return 0;
}
