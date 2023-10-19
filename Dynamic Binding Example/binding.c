#include<stdio.h>
int sum(int,int);
int mul(int,int);
int select_operation(int,int,int (*ptr)(int,int));
int main(void)
{
    char choice;
    int operand1,operand2;
    printf("Please select operation\n 1- Sum\n 2-Mul\n");
    scanf("%d",&choice);
    printf("Enter Operand 1:");
    scanf("%d",&operand1);
    printf("Enter Operand 2:");
    scanf("%d",&operand2);
    if(choice ==1)
        printf("Result=%d\n",select_operation(operand1,operand2,sum)); // passing the function sum to a (pointer to function)
    else if ( choice ==2 )
       printf("Result=%d\n",select_operation(operand1,operand2,mul));
    else
        printf("Error!");

    return 0;
}
int sum(int n1,int n2)
{
    return (n1+n2);
}
int mul(int n1,int n2)
{
    return (n1*n2);
}
int select_operation(int n1,int n2, int (*ptr)(int x,int y))
{
    return (  ptr(n1,n2)  );
}

