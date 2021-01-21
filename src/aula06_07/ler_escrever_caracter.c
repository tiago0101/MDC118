#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("Escrevendo caracteres com putchar()\n");
    putchar(ch); // escreve o caracter no monitor
    putchar(33);

    printf("\nLendo caracteres com getchar()\n");
    printf("Entre com um caractere: ");
    ch = getchar(); // captura um caractere do teclado
    printf("Caractere lido: ");
    putchar(ch);

    return 0;
}