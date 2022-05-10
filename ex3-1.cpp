#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
     int a = 1;
     int b;
     
     printf("a=  ");
     scanf("%d", &a);
     printf("B=  ");
     scanf("%d", &b);
     
     printf("%d + %d = %d \n",a,b, a+b);
     printf("%d - %d = %d \n",a,b, a-b);
     printf("%d * %d = %d \n",a,b, a*b);
     printf("%d / %d = %d \n",a,b, a/b);
     printf("%d   %d = %d \n",a,b, a%b);
     
     printf("%d = %d \n",a,a++);
     printf("%d = %d \n",a,++a);
     printf("%d = %d \n",a,a--);
     printf("%d = %d \n",a,--a);
     
     printf("%d -> %d \n",a,a >> 1);
     printf("%d -> %d \n",a,a << 1);
     
     return 0;
}
