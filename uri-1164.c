#include <stdio.h>

int main()
{
    int test_case, i, j, num, sum = 0;
    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {
        scanf("%d", &num);

        for (j = 1; j < num; j++)
        {
            if (num % j == 0)
            {
                sum += j;
            }
        }

        if (sum == num)
        {
            printf("%d eh perfeito\n", num);
        }
        else
        {
            printf("%d nao eh perfeito\n", num);
        }

        sum = 0;
    }

    return 0;
}