#include <limits.h>

int findMin(int size, int vector[size]){
    int min = INT_MAX;

    for (int i =0; i < size; i++){
        if (vector[i] < min){
            min = vector[i];
        }
    }
    return min;
}

int findMax(int size, int vector[size]){
    int max = findMin(size, vector);

    for (int i=0; i < size; i++){
        if (vector[i] > max){
            max = vector[i];
        }
    }
    return max;
}
