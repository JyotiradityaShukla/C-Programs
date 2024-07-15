# include<stdio.h>
# include<math.h>

int main(){

    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age>18){
        printf("adult \n");
        printf("they can vote");

        }
    
    else if(age>13 && age<18){
        printf("teen");
    }

    else {
        printf("child \n");
    }
    
    return 0;
}

/*
Types:
1. if-else:
2. switch:
3. ternary
*/ 