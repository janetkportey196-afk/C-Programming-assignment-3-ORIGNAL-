#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int main(){
    int first_number,second_nunber;
    printf("enter first number\n");
    scanf("%d",&first_number);
    printf("enter second number\n");
    scanf("%d",&second_nunber);
    int result=sum(first_number,second_nunber);
    printf("Answer=%d\n",result);
    return 0;
}