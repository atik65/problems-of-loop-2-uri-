#include <stdio.h>

int main()
{

    int i, num, factorial = 1;

    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        factorial *= i;
    }

    printf("%d\n", factorial);

    return 0;
}