#include <stdio.h>

int main() {
    int sub1,sub2,marks;
    printf("Enter marks of sub1 : ");
    scanf("%d", &sub1);  // Use %c to read a single character

    printf("Enter marks of sub2 : ");
    scanf("%d", &sub2);

    marks=(sub1+sub2)/2;


    if(marks<30 && marks>=0){
        printf("fail");
    }
    
    else if(marks>=30 && marks<=100){
        printf("pass");
    }

    else{
        printf("Wrong marks");
    }

//marks<30 ? printf("Fail \n"): printf("Pass \n")

    return 0;
}
