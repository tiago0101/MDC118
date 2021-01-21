#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int z;

    /* operador soma */
    z = x + y;
    printf("x + y = %d\n", z);

    /* operador subtração */
    z = x - y;
    printf("x - y = %d\n", z);

    /* operador multiplicação */
    z = x * y;
    printf("x * y = %d\n", z);

    /* operador divisão */
    z = x / y;
    printf("x / y = %d\n", z);
    printf("x * 1.0 / y = %f\n", x * 1.0 / y);

    /* operador resto da divisão */
    z = x % y; // 10 / 20 => resultado 0 com resto 10
    printf("x %% y = %d\n", z);

    /* operadores de incremento e decremento */
    z = x++; // x era 10, depois x passou para 11
    printf("z = x++ => z = %d e x = %d\n", z, x);
    z = ++x; // x era 11 e passo para 12
    printf("z = ++x => z = %d e x = %d\n", z, x);
    printf("x-- => %d\n", x--); // usa o valor de x, depois decrementa
    printf("--x => %d\n", --x); // decrementa x, depois usa o valor de x

    /* forma concatenada */
    printf("x += 10 => %d\n", x += 10);  // x = x + 10;
    printf("x -= 10 => %d\n", x -= 10);  // x = x - 10;
    printf("x *= 10 => %d\n", x *= 10);  // x = x * 10;
    printf("x /= 10 => %d\n", x /= 10);  // x = x / 10;
    printf("x %%= 10 => %d\n", x %= 10); // x = x % 10;

    return 0;
}