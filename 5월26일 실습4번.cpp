#include <stdio.h>
int max(double a, double b);
int main(void)
{
    int x, y;
    int result;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);
    result = max((double)x, (double)y);
    printf("더 큰 값: %d\n", result);
    return 0;
}
int max(double a, double b)
{
    if (a > b)
        return (int)a;
    else
        return (int)b;
}
