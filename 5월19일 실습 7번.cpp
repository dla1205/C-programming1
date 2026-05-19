#include <stdio.h>

void input(int *a, int *b) {
    scanf("%d %d", a, b);
}

int add(int a, int b) {
    return a + b;
}

void print_sum(int sum) {
    printf("%d\n", sum);
}

int main(void) {
    int a, b;
    input(&a, &b);
    print_sum(add(a, b));
    return 0;
}
