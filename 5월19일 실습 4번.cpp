#include <stdio.h>

void print_sum(int sum) {
    printf("%d\n", sum);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    print_sum(a + b);
    return 0;
}
