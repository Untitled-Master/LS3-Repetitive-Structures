#include <stdio.h>

int main() {
    int num, reversed = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; 
        reversed = reversed * 10 + digit; 
        printf("Reversed: %d\n", reversed);
        printf("----------------------------\n");
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);

    return 0;
}

/*Method 2:
As funny as it may sound, this is the second method.
this method didn't cross my mind at first, but it's actually the simplest and most efficient way to reverse a number.
I eventually found it after some digging.
Instead of counting the number of digits and reversing the number, you can simply reverse the number by using the following logic:
1. Get the last digit of the number.
2. Multiply the reversed number by 10 and add the last digit.
3. Divide the original number by 10 to remove the last digit.
4. Repeat the process until the original number becomes 0.
Example:
Let's say the number is 123.
1. Get the last digit: 3
2. Multiply the reversed number by 10 and add the last digit: 0 * 10 + 3 = 3
3. Divide the original number by 10: 123 / 10 = 12
4. Repeat the process:
    - Get the last digit: 2
    - Multiply the reversed number by 10 and add the last digit: 3 * 10 + 2 = 32
    - Divide the original number by 10: 12 / 10 = 1
5. Repeat the process:
    - Get the last digit: 1
    - Multiply the reversed number by 10 and add the last digit: 32 * 10 + 1 = 321
    - Divide the original number by 10: 1 / 10 = 0
6. The original number is 0, so the process stops. 
7. The reversed number is 321.
This method is much simpler and more efficient than the first method.
*/
