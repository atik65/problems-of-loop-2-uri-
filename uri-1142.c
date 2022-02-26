#include <stdio.h>

int main()
{

    int i, j, N, serial = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", serial);
            serial++;
        }
        printf("PUM\n");
        serial++;
    }

    return 0;
}