#include <stdio.h>

int main()
{
    float t1;
    int t2;
    printf("开始\n");
    scanf("%d",&t1);
    printf(" 小时");
    scanf("%d",&t2);
    printf(" 分钟 约等于 ");
    printf("%d 分钟",t2+(t1*60));
    return 0;
}