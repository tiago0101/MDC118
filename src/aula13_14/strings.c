#include <stdio.h>
#include <string.h>

#define TAMANHO 80

int main()
{
    /* declaração de strings */
    char str1[14] = {'E', 'u', ' ', 'g', 'o', 's', 't', 'o', ' ', 'd', 'e', ' ', 'C', '\0'};
    char str2[14] = "Eu gosto de C";

    printf("%s\n", str1);
    for (int i = 0; i < 14; i++)
    {
        printf("%c", str2[i]);
    }

    printf("\n");

    /* manipulação de strings */
    char s1[TAMANHO];
    char s2[TAMANHO];

    // captura string da console
    printf("Entre com a string s1: ");
    gets(s1);
    printf("Entre com a string s2: ");
    gets(s2);

    // tamanho da string
    printf("tamanhos de s1 e s2: %ld, %ld\n", strlen(s1), strlen(s2));

    // comparando strings
    printf("As strings são iguais? %d\n", strcmp(s1, s2));

    // concatenção de strings
    strcat(s1, s2);
    printf("s1 concatenado com s2 = %s\n", s1);

    // cópia de strings
    strcpy(s1, s2);
    printf("s1 copia de s2 = %s\n", s1);

    // preenche a string com um caracter
    memset(s1, 'a', TAMANHO);
    printf("s1 preencido com a = %s\n", s1);

    // busca por caractere
    if (strchr("alo", 'o'))
    {
        printf("caractere encontrado!\n");
    }

    // busca por string
    if (strstr("aqui alo", "alo"))
    {
        printf("string encontrada!\n");
    }

    return 0;
}