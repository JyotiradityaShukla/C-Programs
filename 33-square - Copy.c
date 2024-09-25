#include <stdio.h>
#include <math.h>
//use library functions to calculate the square of a number given by user.
// Use function to find area of a square, circle, rectangle
float square(float side);
float circle(float rad);
float rectangle(float a, float b);
int main(){

    // int n=4;
    // printf("%d", pow(n, 2));
    float a=5.0;
    float b=3.0;
    printf("area is : %f", rectangle(a,b));

return 0;
}

float square(float side){
    return side*side;

}

float circle(float rad){
    return 3.14*rad*rad;
}
float rectangle(float a, float b){
    return a*b;
}