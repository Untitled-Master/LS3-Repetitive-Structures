#include <stdio.h>
#include <math.h>

int main() {
    int N, lastDigit, i, p, n, sumOfDigits;
    printf("Enter N(Binary): ");
    scanf("%d", &N);
    i = 0;
    while(N > 0){
        if(N%10 > 1){
            printf("Invalid binary number");
            return 0;
        }
        else{        
            lastDigit = N%10;
            p = pow(2, i);
            n = lastDigit * p;
            sumOfDigits += n;
            N = N/10;
            i++;
        }
    }
    printf("N = %d", sumOfDigits);
    return 0;
}
