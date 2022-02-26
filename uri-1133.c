#include <stdio.h>

int main()
{

    int i, num1, num2, start, end;
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
    {
        start = num1;
        end = num2;
    }
    else
    {
        start = num2;
        end = num1;
    }

    for (i = start + 1; i < end; i++)
    {

        if (i % 5 == 2 || i % 5 == 3)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}