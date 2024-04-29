#include <stdio.h> //preprocessor command

int main(){
    int N;
    int sum;
    printf("input the number of elements in the array.\n");
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++) {
        printf("input your array values: \n");
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }
    float Average = (sum)/N;
    printf("The sum is = %d\n", sum);
    printf("The number of elements is = %d\n", N);
    printf("The Average is = %f\n", Average);

}