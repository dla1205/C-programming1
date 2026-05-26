#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        if (islower(c))
            putchar(toupper(c));   
        else if (isupper(c))
            putchar(tolower(c));       
        printf("%c\n", c);
    }
    return 0;
}
