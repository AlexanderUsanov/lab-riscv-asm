#include <stdio.h>

#define N 6
#define M 6

void process(int n, int m, int matrix [M][N], int *result, int *max_row)
{
    for (int i = 0; i < m; ++i) {
        result[i] = 0;
        for (int j = 0; j < n; ++j) {
            result[i] += matrix[i][j];
        }
		if (i == 0 || result[i] > result[*max_row]) {
            *max_row = i;
        }
    }

}

int main(int argc, char** argv)
{
    int matrix[M][N];
    int result[M];
	int max_row=0; 
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    process(N, M, matrix, result, &max_row);

    printf("%d\n", max_row);
    printf("%d\n", result[max_row]);

    return 0;
}