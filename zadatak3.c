#include <stdio.h>

int main()
{
    int m, arr[300], result[300], N, cnt;
    cnt = 0;

    printf("Unesite duzinu niza:");
    scanf("%d", &N);

    printf("Unesite niz:");
    for (m = 0; m < N; m++)
        scanf("%d", &arr[m]);

    for (m = 0; m < N; m++)
    {
        if (arr[m] >= -50 && arr[m] <= 350)
        {
            result[cnt] = m;
            cnt++;
        }
    }

    for (m = 0; m < cnt; m++)
        printf("%d ", result[m]);

    return 0;
}
