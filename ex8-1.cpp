// #include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    // int b = 10, c = 1;
    int a[]={3,6,1,2,7};

    int *p;
    
    for (int i=0;i<5;i++){
        p=a+i;
        printf("a[%d] = %x \n",i,*p);
    }
    
    // printf("b = \n");
    // scanf("%d",&b);
    // printf("b = %d \n",b);
    // printf("&b = %x \n",&b);

    // p = &b;
    // printf("b = %d \n",*p);
    // printf("&b = %x \n",p);
    
    // p = &c;
    // printf("c = %d \n",*p);
    // printf("&c = %x \n",p);

    cout << endl << "Hello World";

    return 0;
}
