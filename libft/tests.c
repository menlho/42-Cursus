#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_atoi(char *str);

int main(void)
{
    char str1[] = "        -234fe";
    char str2[] = "        +234fe";
    char str3[] = "        234fe";
    char str4[] = "        d234fe";

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
    printf("----ft_atoi----\n");
    printf("output : %d\n input : %s\n", ft_atoi(str1), str1);
    printf("------------\n");
    printf("output : %d\n input : %s\n", ft_atoi(str2), str2);
    printf("------------\n");
    printf("output : %d\n input : %s\n", ft_atoi(str3), str3);
    printf("------------\n");
    printf("output : %d\n input : %s\n", ft_atoi(str4), str4);
    printf("------------\n");
}