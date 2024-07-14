#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int A[100];
    int n;
    printf("n=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 20 + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}