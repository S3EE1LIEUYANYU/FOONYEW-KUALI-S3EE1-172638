#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    printf("请输第一个数字：");
    scanf("%d", &x);
    printf("\n");
    printf("请输入第二个数字：");
    scanf("%d", &y);
    printf("\n");
    printf("请输入两个数字的和：");
    scanf("%d", &z);
    printf("\n");
    
    if(x+y == z){
        printf("恭喜你！答对了。");
    }
    else if(x+y != z){
        printf("很抱歉，你答错了。");
    }
    printf("\n");
    
    cout<<"Hello World";

    return 0;
}
