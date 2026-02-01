#include <stdio.h>

int main() {
    int n, i, pos, x;
    int arr[200];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);
    scanf("%d", &x);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    for (i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i != n) {
            printf(" ");
        }
    }

    return 0;
}
