#include <stdio.h>
#include <math.h>
int sum(int a, int b);
void printTable(int n);
int main(){

    // int a,b;
    // printf("Enter first number: ");
    // scanf("%d", &a);

    // printf("Enter second number: ");
    // scanf("%d", &b);

    // int s=sum(a,b);
    // printf("sum is %d: ", s);

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printTable(n); //argument/ actual parameter
    return 0;
}

int sum(int x, int y){
    return x+y;
}
void printTable(int n){ //formal parameter
     for (int i=1; i<=10; i++){
        printf("%d \n",n*i);
     }
}
/*
Passing Arguments:-
functions can take value(parameter) and give some value(return value)
>void printHello(); Doesn't take parameters
> void printTable(int n); Takes parameter n and returns value accordingly
> int sum(int a, int b); Takes two parameters 

.Argument: values that are passed in function call, used to send value, actual parameter
.Parameter: Values in function declaration and definition, used to recieve value, formal parameter

Note:-
a. Function can only return one value at a time.
b. changed to value in function dont change the values in calling function

*/