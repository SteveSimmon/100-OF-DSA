#include <stdio.h>

int main() {
    int p, q;
    int a[100000], b[100000], c[200000];
    int i = 0, j = 0, k = 0;

    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;

    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < p) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < q) {
        c[k] = b[j];
        j++;
        k++;
    }

    for (i = 0; i < k; i++) {
        if (i > 0) printf(" ");
        printf("%d", c[i]);
    }

    return 0;
}
