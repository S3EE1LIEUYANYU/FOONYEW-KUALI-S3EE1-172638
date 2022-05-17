#include <stdio.h>
int main() {
    char operators;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operators);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    if (operators == '+') {
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    }
    else if (operators == '-'){
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    }
    else if (operators == '*'){
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    }
    else if (operators == '/'){
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    }
    else if(operators != '+','-','*','/'){
        printf("Error! operator is not correct");
    }

    return 0;
}
