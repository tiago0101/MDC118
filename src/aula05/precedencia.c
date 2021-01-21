#include <stdio.h>

/*
 Tabela de Precedência
 Maior      ( )
            ! ++ -- sizeof
            * / %
            + -
            < <= > >=
            == !=
            &&
            ||
 Menor      = += -= *= /= %=
 */

int main()
{
    printf("2 + 2 * 3 / 2 - 1 = %d\n", 2 + 2 * 3 / 2 - 1);
    printf("(2 + 2) * 3 / 2 - 1 = %d\n", (2 + 2) * 3 / 2 - 1);
    printf("(2 + 2) * 3 / (2 - 1) = %d\n", (2 + 2) * 3 / (2 - 1));
    printf("(2 + 2) * (3 / 2 - 1) = %d\n", (2 + 2) * (3 / 2 - 1));
    printf("(2 + 2) * (3 / (2 - 1)) = %d\n", (2 + 2) * (3 / (2 - 1)));

    return 0;
}