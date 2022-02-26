#include <stdio.h>

int main()
{

    int code, alocohol = 0, gasoline = 0, dieasel = 0;
    scanf("%d", &code);

    while (1)
    {

        if (code == 4)
        {
            break;
        }

        switch (code)
        {
        case 1:
            alocohol++;
            break;
        case 2:
            gasoline++;
            break;
        case 3:
            dieasel++;
            break;
        default:
            break;
        }

        scanf("%d", &code);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alocohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", dieasel);
    return 0;
}