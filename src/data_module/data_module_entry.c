#include <stdio.h>
#include "data_process.h"
#include "../data_libs/data_io.h"


void main() {
    double *data = NULL;
    int n;

    // Don`t forget to allocate memory !

    input(data, n);

    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");
}
