#include <stdio.h>

int main() {
    int number, originalNumber, sum = 0, a;
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number for later use

    int count = 0;
    if (number == 0) {
        count = 1;
        sum = 0;
    } else {
        while (number != 0) {
            a = number % 10;
            int fact = 1, i;
            
            for (i = 1; i <= a; i++) {
                fact *= i;
            }
            number /= 10; // Remove the last digit
            count++;
            sum += fact;
        }
    }
    int fact = 1, i;
    
    for (i = 1; i <= originalNumber; i++) {
        fact *= i;
    }
    if(sum == originalNumber){
        printf("The number is a strong number\n");
    } else {
        printf("The number is not a strong number\n");
    }

    return 0;
}
