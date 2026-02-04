#include <stdio.h>

int main() {
    int n, i;
    int a[100000];
    int left, right, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    left = 0;
    right = n - 1;

    while (left < right) {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }

    return 0;
}
