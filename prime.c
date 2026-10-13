#include <stdio.h>

int main() {
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            printf("not prime\n");
            return 0;
        }
    }

    printf(a > 1 ? "prime\n" : "not prime\n");
    return 0;
}