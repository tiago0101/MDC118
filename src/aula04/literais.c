#include <stdio.h>

int main()
{
    // Literal Caractere
    char letra = 'A';
    char ponto_final = '.';
    char aspa_simples = '\'';
    char nova_linha = '\n';

    printf("letra = %c\n", letra);
    printf("ponto_final = %c\n", ponto_final);
    printf("aspa_simples = %c\n", aspa_simples);
    printf("nova_lina = %c\n", nova_linha);

    // Literal Inteiro
    int decimal = 10;
    int octal = 010;
    int hexadecimal = 0x10;
    unsigned long int numero = 100UL;

    printf("decimal = %d\n", decimal);
    printf("octal = %d\n", octal);
    printf("hexadecimal = %d\n", hexadecimal);
    printf("numero = %lu\n", numero);

    // Literal Ponto Flutuante
    float flutuante = 15.75f;
    double duplo = 15.75;
    long double longo = 15.75l;
    float potencia_positiva = 1.575E1;
    double potencia_negativa = 1575E-2;

    printf("flutuante = %f\n", flutuante);
    printf("duplo = %f\n", duplo);
    printf("longo = %Lf\n", longo);
    printf("potencia_positiva = %f\n", potencia_positiva);
    printf("potencia_negativa = %f\n", potencia_negativa);

    // Literal String
    char *string1 = "isso é uma string";
    char *string2 = "isso é "
                 "uma "
                 "string";
    char *string3 = "isso é \
uma string";

    printf("string1 = %s\n", string1);
    printf("string2 = %s\n", string2);
    printf("string3 = %s\n", string3);

    return 0;
}