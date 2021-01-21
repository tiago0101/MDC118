#include <stdio.h>

int main()
{
    char nomes[7][8] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sabado"};

    /* declaração de enumerações */
    enum dias_da_semana
    {
        dom,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    } dia;

    enum sexo
    {
        masculino = 1,
        feminino = 2
    };

    printf("Informe o dia da semana (0-6): ");
    scanf("%u", &dia);

    if (dia >= dom && dia <= sab)
    {
        printf("hoje é %s\n", nomes[dia]);
    }
    else
    {
        printf("dia inválido");
    }

    return 0;
}