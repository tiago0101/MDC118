#include <stdio.h>

int main()
{
    double taxa = 0;
    int idade = 25;

    /* sintaxe completa */
    switch (idade)
    {
    case 24:
        taxa = 0.2; // executada se idade for igual a 24
        break;
    case 25:
        taxa = 0.3; // executada se idade for igual a 25
    case 26:
        taxa = 0.5; // executada se idade for igual a 25 ou 26
        break;
    default:
        taxa = 1.0; // executada em nenhum dos casos anteriores
    }

    printf("valor da taxa: %.1f\n", taxa);

    return 0;
}