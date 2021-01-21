#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i > 5) // salta a repetição
            continue;
        printf("%d, ", i);
    }

    printf("\n");

    char ch = '\0';
    do
    {
        ch = getchar(); // ler uma tecla
        if (ch != '\n') // captura ENTER da leitura anterior
            getchar();            
        if (ch < '0' || ch > '9') // salta a repetição
            continue;
        printf("%c\n", ch);
    } while (ch != '\n');

    return 0;
}