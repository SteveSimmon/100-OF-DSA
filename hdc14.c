#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;
    
    scanf("%d", &n);
    
    int matrix[20][20];
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && matrix[i][j] != 1) {
                isIdentity = 0;
            }
            if(i != j && matrix[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }
    
    if(isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }
    
    return 0;
}
