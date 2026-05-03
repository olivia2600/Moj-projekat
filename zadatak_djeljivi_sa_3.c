#include <stdio.h>
#include <stdlib.h>

int funkcija(int z);

int main()
{
    int M, h, j = 0;

    printf("Unesite duzinu niza X:");
    scanf("%d", &M);

    int *X = (int *)malloc(M * sizeof(int));

    if (X == NULL)
    {
        printf("Neuspjela alokacija memorije");
        return 1;
    }

    for (h = 0; h < M; h++)
    {
        printf("Unesite %d. element niza X:", h + 1);
        scanf("%d", &X[h]);
    }

    int *novi = (int *)malloc(M * sizeof(int));

    if (novi == NULL)
    {
        printf("Neuspjela alokacija memorije");
        free(X);
        return 1;
    }

    for (h = 0; h < M; h++)
    {
        if (funkcija(X[h]) == 1)
        {
            novi[j++] = X[h];
        }
    }

    for (h = 0; h < j; h++)
    {
        printf("%d ", novi[h]);
    }

    free(X);
    free(novi);

    return 0;
}

int funkcija(int z)
{
    if (z % 3 == 0)
        return 1;
    else
        return 0;
}
