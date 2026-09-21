#include<stdio.h>
float StudentAverage(float x,float y,float z){
    return (x + y + z)/3;
}
int main(){
    float number1,number2,number3;
    printf("enter number1\n");
    scanf("%f",&number1);
    printf("enter number2\n");
    scanf("%f",&number2);
    printf("enter number3\n");
    scanf("%f",&number3);
    printf("Average=%.2f\n",StudentAverage(number1,number2,number3));
    return 0;
}