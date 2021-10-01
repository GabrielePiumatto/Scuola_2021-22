#include <stdio.h>
#include <stdlib.h>

void pot2(float *x) {
    *x = *x * *x;
}

int main() {

    float num = 3;
    pot2(&num);
    
    return 0;
}