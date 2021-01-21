#include <stdio.h>

/* 
  Forma de declarar: typedef <tipo> <novo_nome>; 
 */
typedef unsigned char byte;
typedef unsigned short int u_short_int;
typedef long int bigint;
typedef float real;

int main()
{
    printf("byte ocupa %lu byte\n", sizeof(byte));
    printf("u_short_int ocupa %lu bytes\n", sizeof(u_short_int));
    printf("bigint ocupa %lu bytes\n", sizeof(bigint));
    printf("real ocupa %lu bytes\n", sizeof(real));

    return 0;
}
