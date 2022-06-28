#include <stdio.h>

typedef struct Distance{
    int m;
    float cm;
}distance;

// distance add(distance d1, distance d2){
distance add(distance* d1, distance* d2){
    distance dd;
    int temp;
    // dd.cm = d1.cm + d2.cm;
    dd.cm = d1->cm + d2->cm;
    if(dd.cm > 100){
        dd.m = dd.cm / 100;
        temp = dd.cm - (dd.m * 100.0f);
        dd.cm = temp;
    }
    dd.m = dd.m + d1->m + d2->m;

    return dd;
}

// typedef struct Distances{
//     int m;
//     float cm;
// }distances;

int main(){
    distance d1, d2;
    distance* p_d;
    // distances d3, d4;
    d1.m=1;
    d1.cm=78.5;
    d2.m=1;
    d2.cm=77.5;
    p_d = &d1;
    // d3.m=2;
    // d4.cm=99.9;

    // d1=add(d1,d2);
    *p_d = add(*p_d, d2)

    printf("\n");
    // printf("your hight = %d m  %f cm \n",d1.m,d1.cm);
    printf("your hight = %d m  %f cm \n",p_d->m,p_d->cm);
    // printf("your hight = %d m  %f cm \n",d3.m,d4.cm);

    return 0;
}