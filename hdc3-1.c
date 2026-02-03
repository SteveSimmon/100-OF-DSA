#include <stdio.h>

int main() {
    int n, k, i;
    int a[100000];
    int comparisons = 0;
    int index = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        comparisons++;
        if (a[i] == k) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("Found at index %d\n", index);
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
