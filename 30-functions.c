#include<stdio.h>

void printHello();
void printgoodbye();

int main(){

    printHello(); // Function call
    printHello();
    printgoodbye();
    return 0;
}

void printHello(){
    printf("Hello \n");
}

void printgoodbye(){
    printf("Goodbye");
}

/*
Function is a block of code that performs a specific task
It can be used multiple times and increases code reusability
. Function prototype
void printHello(); - function declaration

. Function Definition
void printHello(){
    printf("Hello");

. Function call
int main(){
    printHello();
    return 0;
    }
*/ 