#include <ctype.h>

char up_down_case(char c)
{
    if (islower(c))
        return (char)toupper(c);
    else if (isupper(c))
        return (char)tolower(c);
    else
        return c;
}
