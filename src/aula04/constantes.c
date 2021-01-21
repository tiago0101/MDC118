#include <stdio.h>

/* 
  Formas de declarar: 
  - #define <NOME_DA_CONSTANTE> <valor>
  - const <tipo> <NOME_DA_CONSTANTE> = valor;
 */

// convenção ANSI C
#define SEXO_MASCULINO 1
#define _PHI_ 1.618
#define ERRO "Este programa executou uma operação ilegal."
const int SEXO_FEMININO = 2;
const float PI = 3.14159f;
const char *SAUDACAO = "Olá Pessoal!";

// má pratica de programação
#define limite 10
const char x = '\0';

int main()
{
    printf("SEXO_MASCULINO = %d e SEXO_FEMININO = %d\n", SEXO_MASCULINO, SEXO_FEMININO);
    printf("PI = %f e PHI = %f\n", PI, _PHI_);
    printf("SAUDACAO = %s e ERRO = %s\n", SAUDACAO, ERRO);

    // PI = 3.14; // não é possível alterar valor de uma constante

    return 0;
}