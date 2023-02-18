#include "collatz.h"

int main(int argc, char *argv[])
{
    int search_num;

    if (argc != 2)
    {
        printf("Usage: collatz <num>\n");
        return -1;
    }
    else
    {
        sscanf(argv[1], "%d", &search_num);
        printf("%d\n", collatz(search_num));

        return 0;
    }
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
