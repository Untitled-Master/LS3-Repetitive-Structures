#include <stdio.h>

int main() {
    int dividend, divisor, i = 0, originalDividend; 
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    while (dividend >= divisor || dividend > 0) {
        originalDividend = dividend;
        dividend = dividend - divisor;
        printf("%d = %d - %d\n",dividend,originalDividend , divisor);
        i = i + 1;
    }
    printf("Quotient: %d\n", i);
    return 0;
}
