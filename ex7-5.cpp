#include <stdio.h>
float hoursCount(float t1, float t2);

int main()
{
    float t1,t2,hours;
    printf("请输入 XX 小时 与 XX 分钟\n");
    scanf("%f",&t1);
    printf("小时\n");
    scanf("%f",&t2);
    printf("分钟\n");
    printf("约等于\n");
    hours = hoursCount(t1,t2);
    printf("%f 小时\n",hours);
    return 0;
}

float hoursCount(float t1, float t2)
{
    float result;
    result = ((t1*60)+t2)/60;
    return result; 
}