#include <stdio.h>

int main(void) {
    int n;
    printf("Enter any number and I'll factorial it: ");
    scanf("%d", &n);
    long long factorial = 1;
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--) {
        factorial *= i;
        printf("%d", i);
        if (i > 1) {
            printf("*");
        }
    }
    printf(" = %lld\n", factorial);
}
