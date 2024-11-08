#include <stdio.h>

int main(){
    int N, A, i, j;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    i = 0;
    j = 0;
    while(N > 0 && i < N){
        printf("Enter grade %d: ", i+1);
        scanf("%d", &A);
        i++;
        if(A >= 10){
            j++;
        }
    }
    printf("Number of students with grade 10 or more: %d\n", j);
    return 0;
}
