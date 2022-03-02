#include <stdio.h>

int main()
{

    int start, i, sum = 0;

    while (1)
    {
        scanf("%d", &start);

        if (start == 0)
        {
            break;
        }

        if (start % 2 != 0)
        {
            start++;
        }

        for (i = 1; i <= 5; i++)
        {
            sum += start;
            start += 2;
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}