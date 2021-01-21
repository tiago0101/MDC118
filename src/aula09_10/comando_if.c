#include <stdio.h>

int main()
{
    double taxa = 0;
    int idade = 32;
    char sexo = 'F';

    /* sintaxe if simples */
    if (idade > 25) // se condicao for verdadeira então
        taxa = 0.2;

    if (sexo == 'F')
    {
        taxa = 0.5;
    }

    printf("valor da taxa: %.1f\n", taxa);

    /* sintaxe if completa */
    if (idade < 25) // se condicao for verdadeira então
        taxa = 0.2;
    else // caso contrário
        taxa = 0;

    if (sexo != 'F')
    {
        taxa = 0.5;
    }
    else
    {
        taxa = 0.2;
    }

    printf("valor da taxa: %.1f\n", taxa);

    /* if-else-if */
    if (idade > 25)
    {
        taxa = 0.3;
    }
    else if (sexo == 'F')
    {
        taxa = 0.5;
    }
    else if (sexo == 'M')
    {
        taxa = 0.2;
    }
    else
    {
        taxa = 0;
    }

    printf("valor da taxa: %.1f\n", taxa);

    /* ifs aninhados  */
    if (idade > 25)
    {
        if (sexo == 'F')
        {
            taxa = 0.5;
        }
        else
        {
            taxa = 0.2;
        }
    }
    else
    {
        taxa = 0;
    }

    printf("valor da taxa: %.1f\n", taxa);

    return 0;
}