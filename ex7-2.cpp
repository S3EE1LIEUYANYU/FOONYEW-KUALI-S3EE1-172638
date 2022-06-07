#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int minusNumbers(int a, int b);
int multiplyNumbers(int a, int b);
int devideNumbers(int a, int b);

int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    minus = minusNumbers(n1, n2);
    multiply = multiplyNumbers(na,n2);
    divide = divideNumbers(n1,n2);
    printf("sum = %d",sum);
    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                     
    //return statement
}

int minusNumbers(int a, int b)         // function definition   
{
    int result;
    result = a-b;
    return result;                     
    //return statement
}

int multiplyNumbers(int a, int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                     
    //return statement
}

int devideNumbers(int a, int b)         // function definition   
{
    int result;
    result = a/b;
    return result;                     
    //return statement
}
