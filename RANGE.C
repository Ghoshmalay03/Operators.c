#include(stdio.h)
#include(math.h)
int main(){
    int n;

    printf("Enter a number: ");  //Asks the user to enter a number
    scanf("%d", &n);

    printf("%d", n>9 && n<100);   //Checks if the number is b/w 9 and 100
    return 0;
}
