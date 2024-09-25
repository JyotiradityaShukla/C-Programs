#include <stdio.h>

int main(){

    void namaste();
    void bonjour();
    printf("Enter F for french and I for indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch=='I'){
        namaste();
    }
    else if(ch=='F'){
        bonjour();
    }
    else{ printf("Invalid input");}
    
    return 0;
}
    void namaste(){
        printf("Namaste \n");
    }
    void bonjour(){
        printf("Bonjour \n");
    }

/* Execution always starts from main
A function gets called directly or indirectly from main
There can be multiple functions in a program
Types: 

1. Library function: Inbuilt in C. printf, scanf
2. User defined: declared and defined by programmer


*/