#include <stdio.h>

int main()
{

    int i, start, end, sum = 0, integers = 0;

    scanf("%d %d", &start, &end);

    while (end <= start)
    {
        scanf("%d", &end);
    }

    for (i = start; sum <= end; i++)
    {
        sum += i;
        integers++;
    }

    printf("%d\n", integers);
    return 0;
}