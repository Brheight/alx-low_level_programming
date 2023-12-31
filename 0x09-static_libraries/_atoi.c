int _atoi(char *s)
{
    int num = 0;
    int sign = 1;
    int i = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;
}
