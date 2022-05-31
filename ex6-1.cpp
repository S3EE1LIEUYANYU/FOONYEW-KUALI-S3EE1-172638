#include <iostream>

using namespace std;

int main()
{
    int x,y;
    printf("请输入你的年龄：");
    scanf("%d", &x);
    printf("\n");
    printf("请输入你朋友的年龄：");
    scanf("%d", &y);
    printf("\n");
    
    if(x > y){
        printf("你的年龄比较大");
    }
    else if(x < y){
        printf("你朋友的年龄比较大");
    }
    printf("\n");
    
    cout<<"Hello World";

    return 0;
}
