#include <stdio.h>
int main(void)
{
    int dan, i;
    printf("Enter your dan : ");
    scanf("%d", &dan);
    i = 1;
    while(i <= 9)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++;
    }
    return 0;
}
