#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
    int n;

    n = 0;
    while (n < size/2)
    {
        ft_swap(&tab[n], &tab[(size - 1) - n]);
        n++;
    }
}