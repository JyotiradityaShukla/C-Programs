# include<stdio.h>
# include<math.h>

int main(){

    int age;
    printf("enter age: ");
    scanf("%d", &age);
    age>= 18 ? printf("adult \n") : printf("not adult \n"); 

    return 0;
}

// Ternary: Condition ? doSomething if TRUE : doSomething if FAlSE
