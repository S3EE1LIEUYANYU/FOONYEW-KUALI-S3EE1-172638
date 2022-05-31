#include <stdio.h>
int main(void)
{
    int input_num = 60; 
    
    printf(" %d  factorial number are : ", input_num);
    for(int i=1; i<=60 ; i++ ){
        if( (input_num % i) == 0 ){
            printf (" , %d  ", i);
        }
    }
    printf(" hello ");
    return 0;
}
