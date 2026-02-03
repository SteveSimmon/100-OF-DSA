#include <stdio.h>

int main() {
    int n, pos, i;
    int a[100000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    if (pos >= 1 && pos <= n) {
        for (i = pos; i < n; i++) {
            a[i - 1] = a[i];
        }
        n = n - 1;
    }

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }

    return 0;
}
