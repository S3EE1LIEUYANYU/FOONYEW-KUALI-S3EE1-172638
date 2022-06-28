#include <stdio.h>

int main() {
    char s[] = "hello world ! Are you in Taiwan ?";
    int i;
    int n = sizeof(s)/sizeof(char),n_i;
    int m = sizeof(s)/sizeof(int);
    char* ss;

    for (i = 0; i<n+1 ; i++){
        if(s[i] == '!' ){
            m--;
        }
        else if(s[i] == '?' ){
            m--;
        }
        else if(s[i] == ',' ){
            m--;
        }
    }
    for (i = 0; s[i] != '\0'; i++);
    n_i = i;
    printf("Length of the string= %d \n", i);
    printf("Length of the string n= %d \n",n);
    printf("Length of the string (word)= %d \n",m);

    for(i = 0 ; i < n_i ; i++){
        printf("%c",s[i]);
        // printf("%c",*(ss+i));
    }
    printf("\n");

    return 0;
}