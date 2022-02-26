#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, N;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= 2; j++)
        {

            for (k = 1; k <= 3; k++)
            {
                if (j == 1)
                {
                    if (k == 3)
                    {
                        printf("%.0f", pow(i, k));
                    }
                    else
                    {
                        printf("%.0f ", pow(i, k));
                    }
                }
                else if (j == 2)
                {
                    if (k == 3)
                    {
                        printf("%.0f", pow(i, k) + 1);
                    }
                    else if (k == 1)
                    {
                        printf("%d ", i);
                    }
                    else
                    {
                        printf("%.0f ", pow(i, k) + 1);
                    }
                }
            }

            printf("\n");
        }
    }

    return 0;
}