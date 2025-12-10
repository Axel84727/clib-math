#include "clib_math.h"

// ====================================================================
// --- Square & Cube ---
// ====================================================================
float csquare(float x)
{
    return x * x;
}

float ccube(float x)
{
    return x * x * x;
}

// ====================================================================
// --- Min  ---
// ====================================================================
int cmin_int(int x, int y)
{
    return (x < y) ? x : y;
}
double cmin_double(double x, double y)
{
    return (x < y) ? x : y;
}
float cmin_float(float x, float y)
{
    return (x < y) ? x : y;
}
// ====================================================================
// --- Max ---
// ====================================================================
int cmax_int(int x, int y)
{
    return (x > y) ? x : y;
}
double cmax_double(double x, double y)
{
    return (x > y) ? x : y;
}
float cmax_float(float x, float y)
{
    return (x > y) ? x : y;
}

// ====================================================================
// --- Odd & Even ---
// ====================================================================

bool ceven(int x)
{
    return (x % 2 == 0) ? true : false;
}
bool codd(int x)
{
    return (x % 2 != 0) ? true : false;
}