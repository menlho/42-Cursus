#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);

int main(void)
{
    printf("----ft_isalpha----\n");
    printf("expect 0 output : %d\n", ft_isalpha(5));
    printf("expect 1 output : %d\n", ft_isalpha('a'));
    printf("expect 1 output : %d\n", ft_isalpha('Z'));
    printf("expect 0 output : %d\n", ft_isalpha('4'));
    printf("----ft_isdigit----\n");
    printf("expect 0 output : %d\n", ft_isdigit('a'));
    printf("expect 1 output : %d\n", ft_isdigit('0'));
    printf("expect 1 output : %d\n", ft_isdigit('9'));
    printf("expect 1 output : %d\n", ft_isdigit('5'));
}