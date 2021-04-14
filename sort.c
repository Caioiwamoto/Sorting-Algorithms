#include <stdio.h>
#include <stdlib.h>

void insertion(int *X, int n)
{
    int i, j, teste;

    for (i = 1; i < n; i++)
    {
        teste = X[i];
        j = i - 1;
        while (j >= 0 && X[j] >= teste)
        {
            X[j + 1] = X[j];
            j = j - 1;
        }
        X[j + 1] = teste;
    }
}

void selection(int *X, int n)
{
    int i, j, k, aux;
    for (j = 0; j < n - 1; j++)
    {
        k = j;
        for (i = j + 1; i < n; i++)
        {
            if (X[i] < X[k])
                k = i;
        }
        aux = X[j];
        X[j] = X[k];
        X[k] = aux;
    }
}

int main(int argc, char *argv[])
{
    int *X = malloc(sizeof(int) * 20);
    int i = 0;
    for (i = 0; i < 20; i++)
        X[i] = 20 - i;

    for (i = 0; i < 20; i++)
        printf("%d", X[i]);

    selection(X, 20);

    for (i = 0; i < 20; i++)
        printf("%d", X[i]);

    free(X);

    return 0;
}