#include <stdio.h>

// int add(int a, int b) {
//     return (a + b);
// }

// int main(){
//     int result = add(100.23,10);
//     printf("%d", result);
//     return 0;
// }
/*
for float addition:
 #include <stdio.h>

float add(float a, float b) {
    return (a + b);
}

int main(){
    float result = add(100.32,12.5);
    printf("%f", result);
    return 0;
}

format specifiers include: 
%d => for integers
%f => for float
%s => for string
%c => for character
%lf => for long-range floats (double data type)
%Lf => for long double
%u => for unsigned integer
%p => for pointer
%ul => unsigned int or unsigned long
*/
int addTerms(int n, int d, int a){
    int result = 0;
    for (size_t i = 1; i < n; i++)
    {
        int b = a + d;
        int answer = a + b;
        a = b;
        result = answer;
    }
    return result;
}

int main(){
    int result = addTerms(10,1,0);
    printf("%d", result);
    return 0;
}