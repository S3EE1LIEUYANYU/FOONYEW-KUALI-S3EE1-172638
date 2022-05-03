#include <iostream>

using namespace std;

int main()
{

    float   i;
    float   pi=3.1415926535897932384626433832795;
    
    printf(" please input the radius(cm)\n");
    scanf("%f",&i);
    
    printf(" the circle area is %f cm^2 \n",pi*i*i);
    printf(" the circumference is %f cm \n",2*pi*i);
    
    return 0;
}
