#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return (b!=0)? a/b : 0;
}
int main()
{
    int num1,num2,operatorr;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    printf("Enter the operator value(0 to 3): ");
    scanf("%d",&operatorr);
    int (*fp[4]) (int,int) = {add,sub,multi,division};
    int result = fp[operatorr] (num1,num2);
    printf("Result = %d.",result);
    return 0;
}
