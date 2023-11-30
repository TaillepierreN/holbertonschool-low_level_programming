#include "main.h"

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else if (y == 0)
        return (1);
    else
        return (x * _pow_recursion(x, y - 1));
}
unsigned int binary_to_uint(const char *b)
{
    int i = 0, strlength = 0;
    unsigned int sum = 0;

    if (b == NULL)
        return (0);

    strlength = strlen(b);
    while (b[i] != '\0')
    {
        if (b[i] > '1' || b[i] < '0')
            return (0);
        else if (b[i] == '1')
        {
            sum += _pow_recursion(2, (strlength - (i + 1)));
        }
        i++;
    }
    return (sum);
}