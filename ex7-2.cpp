#include <stdio.h>
int addNumbers(int a, int b); // function prototype
int minusNumbers(int a, int b);
int multiplyNumbers(int a, int b);
int divideNumbers(int a, int b);

int main()
{
    int n1,n2,sum,minus,multiply,divide;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    minus = minusNumbers(n1, n2);
    multiply = multiplyNumbers(n1,n2);
    divide = divideNumbers(n1,n2);
    printf("sum = %d /n",sum);
    printf("minus = %d /n",minus);
    printf("multiply = %d /n",multiply);
    printf("divide = %d /n",divide);
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

int divideNumbers(int a, int b)         // function definition   
{
    int result;
    result = a/b;
    return result;                     
    //return statement
}
