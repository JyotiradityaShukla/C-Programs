# include<stdio.h>
# include<math.h>

int main(){

    int day;
    printf("Enter number: ");
    scanf("%d", &day);

    switch(day){
        case 1 : printf("Monday");
        break;
         case 2 : printf("Tuesday");
        break;
         case 3 : printf("Wednesday");
        break;
         case 4 : printf("Thursday");
        break;
         case 5 : printf("Friday");
        break;
         case 6 : printf("Saturday");
        break;
         case 7 : printf("Sunday");
        break;
         default: printf("invalid number, choose from 1 to 7");

    }
    return 0;
}

/*
switch(number){
Case C1: //doSomething
        break;
Case C2: //doSomething
        break; 
Default: //doSomething 

}

Note: if you dont break, then all switches will start. Ex: 3 prints wednesday, thursday, fri--
*/