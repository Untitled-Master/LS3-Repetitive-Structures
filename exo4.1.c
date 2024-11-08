#include <stdio.h>

int main() {
    int N, i=0, lastDigit, sumOfDigits=0, originalNumber, j=0, p=1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    originalNumber = N;
    while(N > 0){
        N = N/10;
        i++;
    }
    while(i > 0){
        lastDigit = originalNumber%10;
        j = i;
        p = 1;
        while(j > 1){
            p = 10*p;
            j--;
        }
        lastDigit = lastDigit * p;
        sumOfDigits += lastDigit;
        originalNumber = originalNumber/10;
        printf("Reversed: %d \n", sumOfDigits);
        printf("----------------------------\n");
        i--;
    }
    printf("Reversed number: %d\n", sumOfDigits);
    return 0;
}

/*Method 1:
This is the first method I thought about.
I created a while loop to count the number of digits in the number.
Then I created another while loop to reverse the number.
In the second loop, I used this logic:
1. Get the last digit of the number.
2. Multiply that digit by 10 raised to the power of the number of digits minus 1, for example, if the number is 123, the last digit is 3, and the number of digits is 3, so 3 * 10^(3-1) = 300.
3. Add the result to the sum of digits.
4. Divide the original number by 10 to remove the last digit.
5. i-- to decrease the number of digits by 1.

In the end, I printed the reversed number.

Why not simply pow function?
Pow function simply doesnt work.
The issue you're observing with the pow() function is due to how floating-point numbers work in C.
The pow() function returns a floating-point value, which can lose precision when converting large numbers.
For example, when you calculate powers of 10, such as pow(10, 5), it may work correctly, but as the exponent decreases, the result might be rounded or approximated, especially with large numbers.

This means, if you use pow(), you may get a result like 299 instead of 300, which is incorrect.
*/
