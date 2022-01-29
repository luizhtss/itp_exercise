#include <stdio.h>
#include "min_max.h"

int main(){
    
    int test[] = {19, 10, 8, 17, 9};

    int maxValue = findMax(5, test);
    int minValue = findMin(5, test);

    printf("O valor máximo é: %d\n", maxValue);
    printf("O valor mínimo é: %d\n", minValue);

    return 0;
}