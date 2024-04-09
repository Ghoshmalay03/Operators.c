//WAP to check if the day is Sunday or not and if it is snowing or not
#include<stdio.h>
#include<math.h>
int main(){
    int isSunday, isSnowing;

    printf("Press 1 if it's Sunday ORELSE press 0: ");    //1 -> Sunday
    scanf("%d", &isSunday);                               //0 -> Not Sunday

    printf("Press 1 if it's sunny ORELSE press 0: ");      //1 -> Snowing
    scanf("%d", &isSnowing);                               //0 -> Not Snowing

    printf("%d", isSunday && isSnowing);          //Output prints 1 if both the conditions are true orelse 0 if any of the condition is false

    return 0;
}
