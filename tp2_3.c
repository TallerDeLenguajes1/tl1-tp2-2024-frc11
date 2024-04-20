#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main() {
    srand(time(NULL));
    int i, j;
    int **mt = (int **)malloc(N * sizeof(int *));
    for(i = 0; i < N; i++) {
        *(mt + i) = (int *)malloc(M * sizeof(int));
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            *(*(mt + i) + j) = 1 + rand() % 100;
            printf(" %d ", *(*(mt + i) + j));
        }
        printf("\n");
    }

    for(i = 0; i < N; i++) {
        free(*(mt + i));
    }
    free(mt);

    return 0;
}
