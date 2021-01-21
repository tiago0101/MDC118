#include <stdio.h>
#include <string.h>

#define MAX 10

int main()
{
    /* declaração de estruturas */
    struct contato_t
    {
        char nome[31];
        unsigned int telefone;
    } contato1, contato2;

    struct endereco_t
    {
        char logradouro[31];
        int numero;
        unsigned long int cep;
        char bairro[16];
    } endereco;

    /* acessando campos da estrutura */
    strcpy(contato1.nome, "JOSE");
    contato1.telefone = 33332222;
    contato2 = contato1;
    printf("contato1: %s %lu\n", contato1.nome, contato1.telefone);
    printf("contato2: %s %lu\n", contato2.nome, contato2.telefone);

    printf("Entre com logradouro: ");
    scanf("%[^\n]s", endereco.logradouro);
    printf("Entre com numero: ");
    scanf("%d", &endereco.numero);
    printf("Entre com cep: ");
    scanf("%lu", &endereco.cep);
    getchar();
    printf("Entre com bairro: ");
    scanf("%[^\n]s", endereco.bairro);

    printf("\nEndereco: %s, %d - CEP %lu - %s\n", endereco.logradouro, endereco.numero, endereco.cep, endereco.bairro);

    /* estruturas aninhadas */
    struct contato_completo_t
    {
        char nome[31];
        unsigned long int telefone;
        struct endereco_t endereco;
    } contato;

    strcpy(contato.nome, "IESB");
    contato.telefone = 8006023747;
    strcpy(contato.endereco.logradouro, "SGAS");
    contato.endereco.numero = 613;
    contato.endereco.cep = 70200730;
    strcpy(contato.endereco.bairro, "Asa sul");

    /* matriz de estrutura */
    struct endereco_t enderecos[MAX];
    for (int i = 0; i < MAX; i++)
    {
        memset(&enderecos[i], 0, sizeof(struct endereco_t));
    }

    return 0;
}
