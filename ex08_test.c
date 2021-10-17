include <stdio.h>
void ft_sort_int_tab(int *tab, int size);
int main(void)
{
    int i;
    int tarray[] = { 5, 3, 9, 17, 42, 23, 56, 1, 78, 91 };

    ft_sort_int_tab(tarray, 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", tarray[i]);
    return 0;
}

