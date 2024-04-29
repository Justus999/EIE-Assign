#include <stdio.h>

int main(){
    printf("Hello World.\nThis program is for finding the area of a circle.\n"); // to print out values to the terminal
    //scanf on the other hand is used to input values
    float radius;
    const float Pi = 3.142; //or #define Pi = 3.142;
    printf("What is the radius of the circle: ");
    scanf("%f", &radius); // & is used to assign values to a variable
    //%f is a literal used to work with floating numbers
    float A = Pi * radius * radius;
    printf("Area of a circle = %f\n", A);
    return 0;
}