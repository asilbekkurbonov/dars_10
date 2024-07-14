#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_sonlar(int A[],int n){
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 20 + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}

void random_max_max(int A[], int n){
    int max=A[0];
    int i;
    for(i=1; i<n; i++){
        if(max<A[i]){
            max=A[i];
        }
    } printf("max= %d",max);
}