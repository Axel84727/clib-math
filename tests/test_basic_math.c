#include <stdio.h>
#include <stdbool.h>
#include "clib_math.h"

int main()
{
    printf("=== Test of csquare and ccube ===\n");
    float f = 3.0f;
    printf("csquare(%f) = %f\n", f, csquare(f));
    printf("ccube(%f) = %f\n", f, ccube(f));

    printf("\n=== Test of ceven and codd ===\n");
    int n1 = 4, n2 = 7;
    printf("ceven(%d) = %s\n", n1, ceven(n1) ? "true" : "false");
    printf("codd(%d) = %s\n", n2, codd(n2) ? "true" : "false");

    printf("\n=== Test of cabs ===\n");
    int i = -5;
    double d = -3.2;
    float fi = -4.5f;
    printf("cabs(%d) = %d\n", i, cabs(i));
    printf("cabs(%f) = %f\n", d, cabs(d));
    printf("cabs(%f) = %f\n", fi, cabs(fi));

    printf("\n=== Test of cmin and cmax ===\n");
    int a = 3, b = 7;
    float fa = 2.5f, fb = 1.2f;
    double da = -1.1, db = 5.5;

    printf("cmin(%d, %d) = %d\n", a, b, cmin(a, b));
    printf("cmax(%d, %d) = %d\n", a, b, cmax(a, b));

    printf("cmin(%f, %f) = %f\n", fa, fb, cmin(fa, fb));
    printf("cmax(%f, %f) = %f\n", fa, fb, cmax(fa, fb));

    printf("cmin(%f, %f) = %f\n", da, db, cmin(da, db));
    printf("cmax(%f, %f) = %f\n", da, db, cmax(da, db));

    return 0;
}
