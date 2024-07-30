#include <stdio.h>

int main() {
    char ch;
    printf("Enter letter: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z'){
        printf("Upper case");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lower case");
    }
    else{printf("Wrong input");}
    return 0;
}
// A value is 65