#include <iostream>

using namespace std;

void print_arr(int* p,int n){
    int i,n1=sizeof(p)/sizeof(int);
    printf("in function, array size n = %d \n",n1);
    for (i=0; i < n; i ++){
        printf("%d, ",p[i]);
        printf("= %d , ",*(p+i));
    }
    printf("\n");
}

int main()
{
   int a[]={9,10,6,3,2,9};
   int n=sizeof(a)/sizeof(int);
   int* p=a;
   
   printf("array size n = %d \n",n);
   print_arr(p,n);
   printf(*(a[0]));
   
   cout<<"Hello World";
   
   return 0;
}
