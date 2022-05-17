#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float r;
    float pi=3.1415926535897932384626433832795;
    int y;
    
    printf("请输入半径=\n");
    scanf("%f",&r);
    
    if( r >= 0 ){
    printf("圆面积 %f cm^2 \n",r * r * pi);
    printf("圆周长 %f cm \n",2 * r * pi);
   }
   else{
    printf("无效半径 \n");
   }
   
    printf("请输入年份=\n");
    scanf("%d",&y);
    
   if( y % 4 == 0){
       printf("%d年是闰年 \n",y);
   }
   else{
       printf("%d年不是润年 \n",y);
   }
    
    
    cout<<"Hello World";

    return 0;
}
