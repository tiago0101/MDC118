#include <stdio.h>
#include <limits.h> // define valores mínimo e máximo do inteiro
#include <float.h>  // define valores mínimo e máximo do ponto flutuante

/* 
  Modificadores de tipos no C
  - unsigned: número sem sinal
  - signed  : número com sinal (padrão)
  - short   : domínio reduzido
  - long    : domínio estendido
 */

int main()
{
    printf("signed char ocupa %lu byte e aceita valores entre %d e %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char ocupa %lu byte e aceita valores entre %d e %d\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("signed short int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(signed short int), SHRT_MIN, SHRT_MIN);
    printf("unsigned short int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("signed int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(signed int), INT_MIN, INT_MAX);
    printf("unsigned int ocupa %lu bytes e aceita valores entre %d e %u\n", sizeof(unsigned int), 0, UINT_MAX);
    printf("signed long int ocupa %lu bytes e aceita valores entre %ld e %ld\n", sizeof(signed long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int ocupa %lu bytes e aceita valores entre %d e %lu\n", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("long double ocupa %lu bytes e aceita valores entre %LE e %LE\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}