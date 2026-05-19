#include <stdio.h>

void input(int *a, int *b) {
    scanf("%d %d", a, b);
}

int main(void) {
    int a, b;
    input(&a, &b);
    printf("%d\n", a + b);
    return 0;
}
