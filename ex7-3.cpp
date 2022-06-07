#include <stdio.h>

int main()
{
    int n1,n2,mianji;
    printf("請輸入長於寬 ");
    scanf("%d %d",&n1,&n2);
    mianji = n1*n2;  // function call
    printf("矩形面积 = %d \n",mianji);
    return 0;
}
