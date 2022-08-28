#include "StringFunction.h"
#include <string.h>

int main ()
{
    char s[50] = "eeee";
    char c[50] = "qqqqq";
    
    STRCPY (s,c); 

    printf("%s", s);
    
    return 0;
}
