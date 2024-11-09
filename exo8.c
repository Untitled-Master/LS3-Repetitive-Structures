#include <stdio.h>

int main(){
    int sum, i, n;
    double avg;
    sum = 0;
    while(n != 0){
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n < 0){
            printf("Please enter a positive number\n");
        }
        else{
            sum = sum + n;
        }
        i++;
    }
    avg = sum / i;
    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %f\n", avg);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("Made by: Ahmed Belmehnouf");
    return 0;
}
