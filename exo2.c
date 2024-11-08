#include <stdio.h>

int main() {
    int N, i, lastDigit, sumOfDigits, originalNumber;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    i = 0;
    sumOfDigits = 0;
    originalNumber = N;
    while(N > 0){
        lastDigit = N%10;
        N = N/10;
        sumOfDigits += lastDigit;
        i++;
    }
    printf("N=%d, composed of %d digits, the sum is %d.", originalNumber, i, sumOfDigits);
    return 0;
}
