#include <stdio.h>

int main()
{
    int x = 20;
    int y = 30;

    /* igual a */
    printf("x == y? %d\n", x == y); // 0 é falso, 1 é verdadeiro
    printf("x = y? %d\n", x = y);   // não é igualdade

    /* diferente de */
    printf("x != y? %d\n", x != y);

    /* menor que */
    printf("x < y? %d\n", x < y);

    /* menor ou igual */
    printf("x <= y? %d\n", x <= y);

    /* maior que */
    printf("x > y? %d\n", x > y);

    /* maior ou igual */
    printf("x >= y? %d\n", x >= y);

    return 0;
}