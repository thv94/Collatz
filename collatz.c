#include "collatz.h"

int main()
{
    const int n = 56;

    printf("%d\n", collatz(n));

    return 0;
}

int collatz(int n) 
{
    int i = 0;

    while (n > 1) 
    {
        if ((n % 2) == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }

        i++;
    }

    return i;
}