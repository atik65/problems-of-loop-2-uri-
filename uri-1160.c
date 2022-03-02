#include <stdio.h>
#include <math.h>

int main()
{

    int i, test_case, population_city1, population_city2, year = 0;
    double rate_city1, rate_city2;

    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {
        year = 0;
        scanf("%d %d %lf %lf", &population_city1, &population_city2, &rate_city1, &rate_city2);

        while (1)
        {

            if (population_city1 > population_city2)
            {

                break;
            }

            population_city1 = population_city1 + ((population_city1 * rate_city1) / 100);

            population_city2 = population_city2 + ((population_city2 * rate_city2) / 100);

            year++;

            if (year > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (year <= 100)
        {
            printf("%d anos.\n", year);
        }
    }

    return 0;
}