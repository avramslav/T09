#include "data_stat.h"

double max(double *data, int n){
    int max = *data;
    for (double *p = data; p - data < n; p++) {
        if (max < *p) max = *p;
    }

    return max;
}

double min(double *data, int n){
    int min = *data;
    for (double *p = data; p - data < n; p++) {
        if (min > *p) min = *p;
    }

    return min;
}

double mean(double *data, int n){
    double means = 0;
    for (double *p = data; p - data < n; p++) means += *p;

    return (means / n);

}

double variance(double *data, int n){
    double sum = 0;
    double mean_v = mean(data, n);
    for (double *p = data; p - data < n; p++) sum += (*p - mean_v) * (*p - mean_v);

    return sum / n;

}

