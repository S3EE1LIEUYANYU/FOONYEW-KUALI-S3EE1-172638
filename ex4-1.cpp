#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    
    printf(" please input x=\n");
    scanf("%d",&x);
    printf(" please input y=\n");
    scanf("%d",&y);

    
   if( x > y ){
    printf(" x > y ==> %d \n",x > y);
   }
   else if( x < y ){
    printf(" x < y ==> %d \n",x < y);
   }
   else{
    printf(" x = y \n");
   }
   
   z = ( x > y ) ? x : y ;
   printf("z = %d \n",z);
    
    
    
    cout<<"Hello World";

    return 0;
}
