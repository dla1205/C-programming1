#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    for(int i=1; i<=5; i++)
        printf("%d\n", rand());
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
    srand(time(NULL));
    for(int i=1; i<=5; i++)
        printf("%d\n", rand());
    return 0;
}
