#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        if(i % 2 != 0) sum += i;
    printf("%d", sum);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int i = 1, n, sum = 0;
    scanf("%d", &n);
    do {
        if(i % 2 != 0) sum += i;
        i++;
    } while(i <= n);
    printf("%d", sum);
    return 0;
}
