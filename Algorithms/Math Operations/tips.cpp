#include "../definitions.h"

int a, b;
// Find number of digits of a decimal number
int aux = (int)floor(1 + log10((double)a));

// Find number of digits of a number of b base
int aux1 = (int)floor(1 + log10((double)a)) / log10((double)b);