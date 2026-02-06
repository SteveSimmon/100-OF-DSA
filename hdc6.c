#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[100000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int k = 0;
    for (int i = 1; i < n; i++) {
        if (a[k] != a[i]) {
            k++;
            a[k] = a[i];
        }
    }
    
    for (int i = 0; i <= k; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    
    return 0;
}
