#include <stdio.h>
int main() {
    char mark;
    int m;
    printf("请输入分数: ");
    scanf("%d", &m);
    
    
    if( 90 < m && m < 100 ){
        mark = 'A';
    }
    else if( 80 < m && m < 90 ){
        mark = 'B';
    }
    else if( 70 < m && m < 80 ){
        mark = 'C';
    }
    else if( 60 < m && m < 70 ){
        mark = 'D';
    }
     else if( 0 < m && m < 60 ){
        mark = 'E';
    }
    
    switch (mark) {
    case 'A':
        printf("分数为A等\n");
        break;
    case 'B':
        printf("分数为B等\n");
        break;
    case 'C':
        printf("分数为C等\n");
        break;
    case 'D':
        printf("分数为D等\n");
        break;
    case 'E':
        printf("分数为E等\n");
        break;
        // operator doesn't match any case constant
    default:
        printf("无效分数");
    }

    return 0;
}
