#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    int n;
    printf("Enter lotto set number : ");
    scanf("%d", &n);
    int lotto[n][6];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
            lotto[i][j] = rand() % 45 + 1;
    for (int i = 0; i < n; i++) {
        printf("set %d :", i + 1);
        for (int j = 0; j < 6; j++)
            printf("%d ", lotto[i][j]);
        printf("\n");
    }
    return 0;
}
