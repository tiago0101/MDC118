#include <stdio.h>

int main() {
    double taxa = 0;
    int idade = 32;
    char sexo = 'F';

    taxa = idade < 25 ? 0.2 : 0;  // equivale a if (idade < 25) taxa = 0.2 else taxa = 0
    taxa = sexo != 'F' ? 0.5 : 0.2;
    printf("valor da taxa: %.1f\n", taxa);

    taxa = idade > 25 ? 0.3 : sexo == 'F' ? 0.5 : 0; // equivale a if-else-if
    printf("valor da taxa: %.1f\n", taxa);

    taxa = idade > 25 ? sexo == 'F' ? 0.5 : 0.2 : 0; // equivale a if-aninhado
    printf("valor da taxa: %.1f\n", taxa);

    return 0;
}