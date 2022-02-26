#include <stdio.h>

int main()
{

    int num, i, first = 0, second = 1, third;

    scanf("%d", &num);

    printf("%d %d ", first, second);

    for (i = 3; i <= num; i++)
    {
        third = first + second;
        first = second;
        second = third;

        if (i == num)
        {
            printf("%d\n", third);
        }
        else
        {
            printf("%d ", third);
        }
    }

    return 0;
}