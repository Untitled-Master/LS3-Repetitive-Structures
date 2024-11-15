#include <stdio.h>
#include <math.h>

int main() {
    int n, m, i = 2, j = 1, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: \n", n);
    m = sqrt(n);
    while (i <= m) {
        while(j <= i) {
            if (i % j == 0) {
                s = s + 1;
            }
            j++;
        }
        if (s == 2 && n % i == 0) {
            while (n % i == 0) {
                n = n / i;
                
            }
            printf("%d\t", i);
        }
        i++;
        s = 0;
        j = 1;
    }
    // If n is still greater than 1, it is a prime number and should be printed
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("Made by: Ahmed Belmehnouf");
    return 0;
}
