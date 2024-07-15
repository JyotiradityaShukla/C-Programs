# include<stdio.h>
# include<math.h>

int main(){

    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("B is smallest %d \n", a>b && c>b);
    printf("A is smallest %d \n", b>a && c>a);
    printf("C is smallest %d \n", a>c && b>c);
    return 0;
}