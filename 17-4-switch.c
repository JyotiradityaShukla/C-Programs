# include<stdio.h>
# include<math.h>

int main(){

    int day, year;
    printf("Enter number: ");
    scanf("%d", &day);

    printf("Enter year: ");
    scanf("%d", &year);



    switch(day){
        case 1 : printf("January");
        break;
        case 2:  if(year%4==0){printf("Feburary "); printf("29 days");}
    else if(year%4!=0){printf("Feburary "); printf("28 days");}
    break;
         case 3 : printf("March");
        break;
         case 4 : printf("April");
        break;
         case 5 : printf("May");
        break;
        case 6 : printf("June");
        break;
         case 7 : printf("July");
        break;
         case 8 : printf("August");
        break;
         case 9 : printf("September");
        break;
         case 10 : printf("Ocotober");
         break;
         case 11 : printf("Novermber");
        break;
         case 12 : printf("December");
        break;
        default: printf("Invalid number");

    }

}