#include <stdio.h>
#include <math.h>

int main() {
    int n, m, i = 2, j = 1, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("sqrt of %d is: %f\n", n, sqrt(n));
    printf("Prime factors of %d are: \n", n);
    m = sqrt(n);
    while (i <= m) {
        while(j <= i) {
            if (i % j == 0) {
                s = s + 1;
            }
            j++;
        }
        if (s == 2) {
            if (n % i == 0) {
                n = n / i;
                printf("%d\t", i);
            }
        }
        i++;
        s = 0;
        j = 1;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("Made by: Ahmed Belmehnouf");
    return 0;
}
