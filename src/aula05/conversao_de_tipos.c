#include <stdio.h>

/*
  Conversão de tipos no C
  - implícita: feita pelo compilador e sem perda de dados
  - explícita: feita pelo programador e com perda de dados
 */

int main()
{
    char caractere = 127;
    int inteiro = caractere;   // conversão implícita
    float flutuante = inteiro; // conversão implícita
    double duplo = flutuante;  // conversão implícita

    printf("Conversão implícita\n");
    printf("o char %d convertido em int é %d\n", caractere, inteiro);
    printf("o int %d convertido em float é %f\n", inteiro, flutuante);
    printf("o float %f convertido em double é %f\n\n", flutuante, duplo);

    duplo = 270.987654;
    flutuante = (float)duplo;  // conversão explícita
    inteiro = (int)flutuante;  // conversão explícita
    caractere = (char)inteiro; // conversão explícita

    printf("Conversão explícita\n");
    printf("o double %f convertido em float é %f\n", duplo, flutuante);
    printf("o float %f convertido em int é %d\n", flutuante, inteiro);
    printf("o int %d convertido em char é %d\n", inteiro, caractere);

    return 0;
}