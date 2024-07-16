# include<stdio.h>

int main(){

    char day;
    printf("Enter letter: ");
    scanf("%c", &day);

    switch(day){
        case 'm' : printf("Monday");
        break;
         case 't' : printf("Tuesday");
        break;
         case 'w' : printf("Wednesday");
        break;
         case 'T' : printf("Thursday");
        break;
         case 'f' : printf("Friday");
        break;
         case 's' : printf("Saturday");
        break;
         case 'S' : printf("Sunday");
         default: printf("invalid number, choose from 1 to 7");

    }
    return 0;
}

/*
Properties:
1. Cases can be in any order

2. Nested switch(switch inside switch) are allowed

*/