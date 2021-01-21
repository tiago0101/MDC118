#include <stdio.h>

int main()
{
    /* sintaxe normal */
    for (int i = 0; i < 10; i++) // 0 a 9 com salto de 1
        printf("%d, ", i);

    /* o comando acima equivale a */
    // printf("%d, ", 0);
    // printf("%d, ", 1);
    // printf("%d, ", 2);
    // printf("%d, ", 3);
    // printf("%d, ", 4);
    // printf("%d, ", 5);
    // printf("%d, ", 6);
    // printf("%d, ", 7);
    // printf("%d, ", 8);
    // printf("%d, ", 9);

    printf("\n");

    for (int i = 10; i > 0; i--) // 10 a 1 com salto de -1
    {
        printf("%d, ", i);
    }

    printf("\n");

    for (int i = 0; i < 10; i += 2) // salto de 2
    {
        printf("%d, ", i);
    }

    printf("\n");

    for (int i = 10; i > 0; i -= 3) // salto de -3
    {
        printf("%d, ", i);
    }

    printf("\n");

    /* for aninhados */
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("(%d,%d), ", i, j);
        }
    }

    printf("\n");

    /* for infinito */
    for (;;)
    {
        printf("Ao infinito e além!\n");
    }

    return 0;
}