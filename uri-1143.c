#include <stdio.h>
#include <math.h>

int main()
{

    int i, j, N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {

        for (j = 1; j <= 3; j++)
        {

            if (j == 3)
            {
                printf("%.0f", pow(i, j));
            }
            else
            {
                printf("%.0f ", pow(i, j));
            }
        }

        printf("\n");
    }

    return 0;
}