#include <stdio.h>

int main()
{
    int i = 0;
    for (;;)
    {
        i++;
        if (i == 10)
            break; // condição de parada
    }

    char ch = '\0';
    while (1)
    {
        printf("Entre com 1 a 4: ");
        ch = getchar(); // ler uma tecla

        if (ch == '\n') // interrompe a repetição se pressionou apenas ENTER
            break;

        getchar(); // captura ENTER da leitura anterior
    }

    return 0;
}