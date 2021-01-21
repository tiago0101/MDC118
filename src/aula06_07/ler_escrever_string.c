#include <stdio.h>

int main()
{
    printf("Escrevendo strings com puts()\n");
    puts("primeira linha"); // escreve a string no monitor incluindo \n no final
    puts("segunda linha\n");

    printf("Lendo strings com gets()\n");
    printf("Entre com uma string: ");
    char str[31];
    gets(str); // captura uma string do teclado até achar \n
    printf("Você digitou: ");
    puts(str);

    return 0;
}