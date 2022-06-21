// #include <iostream>

// using namespace std;

// void print_arr(int* p,int n){
//     int i,n1=sizeof(p)/sizeof(int);
//     printf("in function, array size n = %d \n",n1);
//     for (i=0; i < n; i ++){
//         printf("%d ",p[i]);
//         printf("= %d  ,",*(p+i));
//     }
//     printf("\n");
// }

// int main()
// {
//    int a[]={9,10,6,3,2,9};
//    int n=sizeof(a)/sizeof(int);
//    int* p=a;
   
//    printf("array size n = %d \n",n);
//    print_arr(p,n);
//    printf("\n %d \n",*(p+n));
   
//    cout<<"Hello World";
   
//    return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    double *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    data=(double*)calloc(n, sizeof(double));

    // ptr=(float*)malloc(100*sizeof(float));

    if(data == NULL){
        printf("Error!! memory not allocated. ");
        exit(0);
    }

    for(int i=0; i<n; i++){
        printf("Enter number %d: ",i+1);
        scanf("%lf",data+i);
    }

    for(int i=1; i<n; i++){
        if(*data < *(data+i)){
            *data=*(data+i);
        }
        printf("Largest number = %.2lf \n",*data);
        free(data);
        return 0;
    }

}