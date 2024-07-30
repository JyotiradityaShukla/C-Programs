#include <stdio.h>

int main() {

/*    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }
        printf("%d \n", i );
    }*/

// print all even numbers between 5 to 50
     for(int i=5; i<=50; i++){
        if(i%2!=0){
            continue;
        }
        printf("%d \n", i ); }
    return 0;
}

// continue statement- skip to next iteration