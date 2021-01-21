#include <stdio.h>
#include <limits.h> // define valores mínimo e máximo do inteiro
#include <float.h>  // define valores mínimo e máximo do ponto flutuante

/* 
  Tipos primitivos do C 
  - char  : representa os caracteres
  - int   : representa os números inteiros
  - float : representa os números de ponto flutuante com 6 casas
  - double: representa os números de ponto flutuante com 16 casas 
  - void  : representa vazio ou sem valor
 */

int main()
{
    printf("char ocupa %lu byte e aceita valores entre %d e %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float ocupa %lu bytes e aceita valores entre %E e %E\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double ocupa %lu bytes e aceita valores entre %E e %E\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("void ocupa %lu byte\n", sizeof(void));

    return 0;
}