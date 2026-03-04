#include <stdio.h>

#define MAX 100000

int main() {
    int stack[MAX];
    int top = -1;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int op;
        scanf("%d", &op);

        if (op == 1) {              // push
            int val;
            scanf("%d", &val);
            if (top < MAX - 1) {
                stack[++top] = val;
            }
        } else if (op == 2) {       // pop
            if (top == -1) {
                printf("Stack Underflow\n");
            } else {
                printf("%d\n", stack[top--]);
            }
        } else if (op == 3) {       // display
            if (top == -1) {
                // nothing to print
            } else {
                for (int j = top; j >= 0; j--) {
                    printf("%d", stack[j]);
                    if (j > 0) printf(" ");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
