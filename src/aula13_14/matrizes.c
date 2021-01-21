#include <stdio.h>

int main()
{
    /* declaração de matriz unidimensinal */
    int arr[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    char str[25] = {'u', 'm', 'a', ' ', 'm', 'a', 't', 'r', 'i', 'z', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 'a', 'c', 't', 'e', 'r', 'e', 's', '\0'};

    printf("arr[10] = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\n");

    printf("str[24] = ");
    for (int i = 0; i < 25; i++)
    {
        printf("%c ", str[i]);
    }

    printf("\n");

    /* declaração de matriz multidimensional */
    float notas1[3][4] = {8.0f, 7.5f, 8.5f, 9.0f, 8.9f, 9.0f, 8.6f, 8.4f, 6.8f, 7.1f, 7.0f, 7.6f};
    float notas2[4][3] = {{8.0f, 7.5f, 8.5f}, {9.0f, 8.9f, 9.0f}, {8.6f, 8.4f, 6.8f}, {7.1f, 7.0f, 7.6f}};

    printf("matriz[3][4]\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f, ", notas1[i][j]);
        }

        printf("\n");
    }

    printf("matriz[4][3]\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f, ", notas2[i][j]);
        }

        printf("\n");
    }

    return 0;
}