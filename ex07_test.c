#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main(void)
{
    int tarray[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        tarray[i] = i;
    }

    ft_rev_int_tab(tarray, 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", tarray[i]);
    }
    return 0;
}
