#include <stdio.h>
#include <stdlib.h>

//a program that takes two integers numbers and return
//the sum, abstraction, multiplication, and division of them.
int main()
{
    int num1=0, num2=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("%d+%d= %d",num1,num2,num1+num2);
    printf("\n%d-%d= %d",num1,num2,num1-num2);
    printf("\n%d*%d= %d",num1,num2,num1*num2);
    printf("\n%d/%d= %d",num1,num2,num1/num2);

    return 0;
}
