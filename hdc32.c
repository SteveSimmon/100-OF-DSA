#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int stack[100000];
    int top = -1;

    // push n elements
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        stack[++top] = x;
    }

    int m;
    scanf("%d", &m);

    // pop m elements (assuming m <= n)
    for (int i = 0; i < m; i++) {
        if (top >= 0) {
            top--;
        }
    }

    // print remaining from top to bottom
    for (int i = top; i >= 0; i--) {
        printf("%d", stack[i]);
        if (i > 0) printf(" ");
    }

    return 0;
}
