#include <stdio.h>
int minutesCount(float t1, int t2);

int main()
{
    float t1;
    int t2;
    float minutes;
    printf("请输入 XX 小时 与 XX 分钟\n");
    scanf("%f",&t1);
    printf("小时\n");
    scanf("%d",&t2);
    printf("分钟\n");
    printf("约等于\n");
    minutes = minutesCount(float t1, int t2);
    printf("%f 分钟",minutes);
    return 0;
}

int minutesCount(float t1, int t2)
{
    float result;
    result = t2+(t1*60);
    return result; 
}