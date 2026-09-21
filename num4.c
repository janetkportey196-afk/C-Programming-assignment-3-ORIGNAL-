#include<stdio.h>
void CheckEvenOdd(int number){
    if(number %2==0){
        printf("%d is even_number\n",number);
    }else{
        printf("%d is odd number\n",number);
    }
}
int main(){
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    CheckEvenOdd(number);
    return 0;
}
