#include <stdio.h>

int main()
{

    int num, i, test_case, j, prime = 1;
    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {
        prime = 1;
        scanf("%d", &num);
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                printf("%d nao eh primo\n", num);
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d eh primo\n", num);
        }
    }

    return 0;
}