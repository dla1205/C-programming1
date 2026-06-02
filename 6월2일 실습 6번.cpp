#include <stdio.h>

int main(void) {
    int arr[3][3];
    int value = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = value++;
        }
    }

    for (int i = 0; i < 3; i++) {
        int row_sum = 0; 
        
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            row_sum += arr[i][j]; 
        }
        printf("%d\n", row_sum);
    }

    return 0;
}
