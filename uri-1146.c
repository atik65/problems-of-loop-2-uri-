#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    while (1)
    {

        if (num == 0)
        {
            break;
        }

        for (i = 1; i <= num; i++)
        {
            if (i == num)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d ", i);
            }
        }

        scanf("%d", &num);
    }

    return 0;
}