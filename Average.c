//Average of 3 numbers
int main(){
    int a, b, c;
    printf("Enter 1st number: "); 
    scanf("%d", &a);
    
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("Enter 3rd number: ");
    scanf("%d", &c);

    int average = (a+b+c)/3;
    printf("The average of %d, %d, %d is %d", a, b, c, average); //prints the average of 3 numbers

    return 0;

}
