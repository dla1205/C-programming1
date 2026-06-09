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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            int num, dup;
            do {
                num = rand() % 45 + 1;
                dup = 0;
                for (int k = 0; k < j; k++)
                    if (lotto[i][k] == num) { dup = 1; break; }
            } while (dup);
            lotto[i][j] = num;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("set %d :", i + 1);
        for (int j = 0; j < 6; j++)
            printf("%d ", lotto[i][j]);
        printf("\n");
    }
    return 0;
}
