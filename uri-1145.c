#include <stdio.h>

int main()
{
    int i, item_number, range, num = 1;

    scanf("%d %d", &item_number, &range);

    while (num <= range)
    {
        for (i = 1; i <= item_number; i++)
        {
            if (i == item_number)
            {
                printf("%d\n", num);
            }
            else
            {
                printf("%d ", num);
            }

            num++;
        }
    }
    return 0;
}