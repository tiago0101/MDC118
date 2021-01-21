#include <stdio.h>

/* 
  Forma de declarar: <tipo> <nome_da_variavel>;
 */

int main()
{
    // convenção ANSI C
    int variavel1, _variavel;
    double valor_produto;
    int soma = 100;
    char *msg = "Olá Pessoal!";

    // não é convenção ANSI C
    double valorProduto; // Padrão Camel-Case usando em C++
    int DiaDaSemana;

    // má pratica de programção
    int a, b, c, x1, x2, x3;
    float VALOR;

    // nomes inválidos de variáveis
    // int 1var, @var;

    printf("valo_produto = %f\n", valor_produto);
    printf("soma = %d\n", soma);
    printf("msg = %s\n", msg);

    return 0;
}