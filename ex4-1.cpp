#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    // int bool_value;
    
    printf(" please input x=\n");
    scanf("%d",&x);
    printf(" please input y=\n");
    scanf("%d",&y);
    
    bool_value = ( x > y );
    printf(" x > y ==> %d \n",bool_value);
    bool_value = ( x < y );
    printf(" x < y ==> %d \n",bool_value);
    bool_value = ( x < 5 or x > 10);
    printf(" x < 5 or x > 10 ==> %d \n",bool_value);
    
   if( x > y ){
    printf(" x > y ==> %d \n",x > y);
   }
   else if( x < y ){
    printf(" x < y ==> %d \n",x < y);
   }
   else{
    printf(" x = y \n");
   }
    
    
    
    cout<<"Hello World";

    return 0;
}
