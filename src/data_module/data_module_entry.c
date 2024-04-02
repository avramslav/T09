#include <stdio.h>
#include <stdlib.h>

#include "data_process.h"
#include "../data_libs/data_io.h"


int main() {
    double *data = NULL;
    int n = 0, is_correct, is_success = 0;

    is_correct = scanf("%d", &n);

    // Don`t forget to allocate memory !
    if (is_correct && n !=0){
        data = (double*)malloc(n * sizeof(double ));
        is_success = input(data, n);
    } else {
        printf("ERROR");
        return 1;
    }
    if (is_success && normalization(data, n))
        output(data, n);
    else
        printf("ERROR");

    return 0;
}
