#include <stdio.h>
#include "clib_math.h"

int main()
{
    int x = -2;
    printf("abs(%d) = %d\\n", x, clib_abs_int(x));
    return 0;
}
