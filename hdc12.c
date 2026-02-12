#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric) {
        printf("Symmetric Matrix\n");
    }else {
        printf("Not a Symmetric Matrix\n");
    }