#include <stdio.h>

int main()
{
    char ch = 'a';
    char str[31] = "uma cadeia de caracteres";
    int numero = 100;
    float moeda = 56.48;

    printf("Escrevendo com printf()\n");
    printf("%c %s\n", ch, str);
    printf("%d %f\n", numero, moeda);
    printf("%5c %30s %5d %10.2f\n", ch, str, numero, moeda);
    printf("%-5c %-30s %05d %-10.2f\n", ch, str, numero, moeda);

    printf("Lendo com scanf()\n");
    printf("Entre com um caractere: ");
    scanf("%c", &ch);
    printf("Entre com uma string: ");
    scanf("%s", str); // captura a string até char um espaço em branco
    printf("Entre com um inteiro: ");
    scanf("%d", &numero);
    printf("Entre com um valor em moeda: ");
    scanf("%f", &moeda);
    printf("Você digitou: %5c %30s %5d %5.2f\n", ch, str, numero, moeda);

    printf("Entre com outra string: ");
    getchar(); // captura \n da última leitura
    scanf("%[^\n]s", str); // caputra a string até achar um \n
    printf("Você digitou: %s", str);

    return 0;
}