#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"math_A.h"

int main()
{
    int A[100];
    int n;
    printf("n=");
    scanf("%d", &n);

    random_sonlar(A,n);
    random_max_max(A,n);
}