#include <stdio.h>

int global = 30; // variavel global

int main()
{
    int local = 10; // variavel local com escopo main

    {
        int local = 20; // variavel local com escopo bloco
        int temp = 10;
        printf("global = %d\n", global);
        printf("local = %d\n", local);
        printf("temp = %d\n", temp);
    }

    printf("global = %d\n", global);
    printf("local = %d\n", local);
    // printf("temp = %d\n", temp); // variável temp não existe nesse escopo

    return 0;
}