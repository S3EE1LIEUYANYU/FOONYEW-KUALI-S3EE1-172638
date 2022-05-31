#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    printf("请输入 n 的值：");
    scanf("%d",&n);
    printf("\n");
    
    for(i=1; i<n+1; i++){
        if(i == 1 ){
            printf("*");
        }
        else if(i != 1){
            for(j=1;j<2*i;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    
    int a[9]={1,2,3,4,5,6,7,8,9};
    int i,j;
    
    for(i=1; i<10; i++){
        for(j=0; j<9; j++){
            printf("%d X %d = %2d  ",a[j],i,i*a[j]);
        }
        printf("\n");
    }
    
    
    int a[6]={8,3,6,10,45,12};
    int b[6];
    int i,n,m;
    
    n=sizeof(a)/sizeof(int);
    
    for(i=0; i<n; i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    
    for(i=0; i<6; i++){
        scanf("%d",&b[i]);
    }
    
    m=sizeof(b)/sizeof(int);
    for(i=0; i<m; i++){
        printf("b[%d]=%d\n",i+1,b[i]);
    }
    
    cout << "Hello World";
    
    return 0;
}
