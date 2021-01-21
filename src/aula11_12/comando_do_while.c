#include <stdio.h>

int main()
{

    /* sintaxe normal */
    int i = 0;
    do
    {
        printf("%d, ", i);
        i++;
    } while (i < 10);

    printf("\n");

    char ch = '\0';
    do
    {
        ch = getchar();
        if (ch != '\n') // captura ENTER da leitura anterior
            getchar();
        printf("%c\n", ch);
    } while (ch != '\n');

    printf("\n");

    /* do-while aninhado */
    i = 0;
    do
    {
        int j = 0;
        do
        {
            printf("(%d,%d), ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);

    printf("\n");

    /* do-while infinito */
    do
    {
        printf("Ao infitino e além!\n");
    } while (1);

    return 0;
}