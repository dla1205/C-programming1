#include <stdio.h>
char up_down_case(char c);

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        printf("%c\n", up_down_case((char)c));
    }
    return 0;
}
