#include <stdio.h>

int main()
{
    /* operador de atribuição */
    int var = 10;
    int outra = 20;

    printf("%d\n", var);
    printf("%d\n", outra);

    /* operador de atribuição */
    var = outra;

    printf("%d\n", var);
    printf("%d\n", outra);

    return 0;
}