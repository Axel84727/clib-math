#pragma once
#include <stdbool.h>
// ====================================================================
// --- Absolute - abs.c ---
// ====================================================================
int abs_int(int x);
double abs_double(double x);
float abs_float(float x);

#define cabs(x) _Generic((x), \
    int: abs_int,             \
    double: abs_double,       \
    float: abs_float,         \
    default: abs_double)(x)

// ====================================================================
// --- Basic operations - basic_math.c  ---
// ====================================================================

// ====================================================================
// --- Square & Cube ---
// ====================================================================
float csquare(float x);
float ccube(float x);
// ====================================================================
// --- Min  ---
// ====================================================================
#define cmin(x, y) _Generic((x), \
    int: cmin_int,               \
    float: cmin_float,           \
    double: cmin_double,         \
    default: cmin_double)(x, y)

float cmin_float(float x, float y);
double cmin_double(double x, double y);
int cmin_int(int x, int y);
// ====================================================================
// --- Max ---
// ====================================================================
#define cmax(x, y) _Generic((x), \
    int: cmax_int,               \
    float: cmax_float,           \
    double: cmax_double,         \
    default: cmax_double)(x, y)

int cmax_int(int x, int y);
double cmax_double(double x, double y);
float cmax_float(float x, float y);
// ====================================================================
// --- Odd & Even ---
// ====================================================================
bool ceven(int x);
bool codd(int x);
