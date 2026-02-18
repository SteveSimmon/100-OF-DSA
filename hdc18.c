#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (n > 0) {
        k = k % n;          // handle k >= n
    }

    int res[n];
    // place each element in its rotated position
    for (int i = 0; i < n; i++) {
        int newIndex = (i + k) % n;   // right rotation formula
        res[newIndex] = arr[i];
    }

    // print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", res[i]);
        if (i != n - 1) printf(" ");
    }

    return 0;
}
