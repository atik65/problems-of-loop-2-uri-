#include <stdio.h>

int main()
{
    int i, test_case, start, range, count, sum = 0;
    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {

        scanf("%d %d", &start, &range);

        if (start % 2 == 0)
            start++;

        for (count = 1; count <= range; count++)
        {

            sum += start;
            start += 2;
        }

        printf("%d\n", sum);

        sum = 0;
    }

    return 0;
}