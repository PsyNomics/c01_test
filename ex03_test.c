#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
int main(void)
{
    int div;
    int mod;

    ft_div_mod(42, 6, &div, &mod);
	printf("%d, %d | ", div, mod);
    ft_div_mod(1234, 2, &div, &mod);
	printf("%d, %d | ", div, mod);
    ft_div_mod(0, 1, &div, &mod);
	printf("%d, %d", div, mod);
    return 0;
}
