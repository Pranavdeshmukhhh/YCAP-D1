#include <stdio.h>

int main() {
    int a = 12, b = 25;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
