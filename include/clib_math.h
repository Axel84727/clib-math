#pragma once
int abs_int(int x);
double abs_double(double x);
float abs_float(float x);

#define cabs(x) _Generic((x), \
    int: abs_int,             \
    double: abs_double,       \
    float: abs_float,         \
    default: abs_double)(x)
