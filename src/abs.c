#include "clib_math.h"
int abs_int(int x)
{
    return x < 0 ? -x : x;
}

double abs_double(double x)
{
    return x < 0 ? -x : x;
}
float abs_float(float x)
{
    return x < 0 ? -x : x;
}