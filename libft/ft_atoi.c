int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+') {
        sign = 1;
        i++;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            res *= 10;
            res += str[i] - 48;
        }
        else
            return sign * res;
        i++;
    }
    return (sign * res);
}