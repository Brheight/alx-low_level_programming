#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;

        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        // Check for overflow before updating the result
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == -1)
                return INT_MIN;
            else
                return INT_MAX;
        }

        result = result * 10 + digit;
        i++;
    }

    // Perform final check for INT_MIN since INT_MIN is greater than INT_MAX in two's complement representation
    if (sign == -1 && result == INT_MAX)
        return INT_MIN;

    return result * sign;
}
