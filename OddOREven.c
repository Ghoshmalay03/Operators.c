//WAP using operators to check the whether the user entered number is odd or even.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");  //Asks the user to enter a number
    scanf("%d", &n);

    //0 -> ODD
    //1 -> EVEN
    printf("%d", n%2==0);  
    return 0;
}
