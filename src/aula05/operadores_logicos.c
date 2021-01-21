#include <stdio.h>

int main()
{
    int x = 30;
    int y = 20;

    /* operador E */
    printf("p = %d\n", x > y);
    printf("q = %d\n", x - 10 > y);
    printf("p && q = %d\n", x > y && x - 10 > y); // falso E qualquer coisa é falso

    /* operador OU */
    printf("p = %d\n", x > y);
    printf("q = %d\n", x - 10 > y);
    printf("p || q = %d\n", x > y || x - 10 > y); // verdadeiro OU qualquer coisa é verdadeiro

    /* operador NÃO */
    printf("!p = %d\n", !(x > y)); // inverte o valor lógico
    printf("!q = %d\n", !(x - 10 > y));
    printf("!(p || q) = %d\n", !(x > y || x - 10 > y));

    return 0;
}