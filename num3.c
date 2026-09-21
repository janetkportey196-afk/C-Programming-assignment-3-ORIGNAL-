#include<stdio.h>
//function declaration
int sum(int x,int y){return x+y;}
int multiply(int x,int y){return x*y;}
int subtract(int x,int y){return x-y;}
float divide(float x,float y){return x/y;}
int main(){
    int number1,number2;
    printf("enter first number");
    scanf("%d",&number1);
    printf("enter second number");
    scanf("%d",&number2);
    printf("Addition=%d\n",sum(number1,number2));
    printf("Multiplication=%d\n",multiply(number1,number2));
    printf("Subtraction=%d\n",subtract(number1,number2));
    printf("Division=%.2f\n",divide(number1,number2));
    return 0;
}