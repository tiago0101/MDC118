#include <stdio.h>

int main()
{

    /* sintaxe normal */
    int i = 0;
    while (i < 10)
    {
        printf("%d, ", i);
        i++;
    }

    printf("\n");

    char ch = getchar();
    while (ch != '\n')
    {
        getchar(); // captura ENTER da leitura anterior
        printf("%c\n", ch);
        ch = getchar();
    }

    printf("\n");

    /* while aninhado */
    i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            printf("(%d,%d), ", i, j);
            j++;
        }
        i++;
    }

    printf("\n");

    /* while infinito */
    while (1)
    {
        printf("Ao infinito e além!\n");
    }

    return 0;
}