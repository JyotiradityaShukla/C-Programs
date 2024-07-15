# include<stdio.h>
# include<math.h>

int main(){

    printf("%d \n", -8 % 3);
    printf("%f \n", 2.0 * 2);
    
    int a=(int) 1.999;
    printf("%d \n", a);
    return 0;
} 

/*Instructions: These are statements in a program
Types-
1. Type declaration instructions: Declare var before using it.

Valid examples- int a=22; int b=a; int c=b+1; int d=1,e;

Invalid examples- int oldAge=22; int newAge=oldAge + years; int years=2
this is error because years variable is used before it is assigned

int x=y=z=4; this is error because y and z have not been defined before use but x is being defined

2. Arithematic instructions: a+b, a-operand 1, b-operand 2, operator- '+'
. int a=1,b=1;
  int sum= a+b;

. int b+c=a; is invalid

. int x,y=22; in this 22 is assigned to y and not x

Note:- For x to the power y, pow(x,y)
a=b^c is wrong
a=pow(b,c) is right

Note:- Modular operator % returns remainder. 3 % 2 = 1, -3 % 2 = -1
Doesn't work on float

Type conversion: if int operates with float, answer is float.

3.Control instructions: Used to determine the flow of program.

a) Sequence control-
b) Decision control- If else
c) Loop control- For while
d) Case control- 

*/
