#include <stdio.h>

int main()
{

    int i, start, range, sum = 0;

    scanf("%d %d", &start, &range);

    while (range <= 0)
    {
        scanf("%d", &range);
    }

    for (i = start; i < start + range; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}