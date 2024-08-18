#include<stdio.h>
#include<limits.h>

double calculate(double num1, double num2, char operation){
    if(operation == '+'){
        return num1 + num2;
    }
    else if (operation == '-'){
        return num1 - num2;
    }
    else if (operation == '*'){
        return num1 * num2;
    }
    else if (operation == '/'){
        if(num2 != 0){
            return num1/num2;
        }
        //divide by zero error
        return INT_MIN;
    }
    else{
        //operation not supported
        return INT_MIN;
    }

}

int main(){
    char op;
    double num1;
    double num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter your first number: ");
    scanf("%lf", &num1);
    
    printf("Enter your second number: ");
    scanf("%lf", &num2);
    

    double result = calculate(num1, num2, op);

    if(result != INT_MIN){
        printf("%.2lf\n", result);
    }
    else{
        if(op == '/'){
            printf("Output produces a divide by zero error...\n");
        }
        else{
            printf("%c operation is not supported\n", op);
        }
    }
    return 0;
}