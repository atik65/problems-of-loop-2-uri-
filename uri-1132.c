#include <stdio.h>

int main()
{
    int i, start_range, end_range, num1, num2, sum = 0;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        start_range = num2;
        end_range = num1;
    }
    else
    {
        start_range = num1;
        end_range = num2;
    }

    for (i = start_range; i <= end_range; i++)
    {

        if (i % 13 != 0)
        {

            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}