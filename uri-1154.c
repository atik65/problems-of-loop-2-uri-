#include <stdio.h>

int main()
{

    int age, count = 0, age_sum = 0;

    scanf("%d", &age);

    while (1)
    {
        if (age < 0)
        {
            break;
        }

        age_sum += age;
        count++;

        scanf("%d", &age);
    }

    printf("%0.2f\n", (float)age_sum / count);

    return 0;
}