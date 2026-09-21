#include<stdio.h>
void CheckEligibility(int age){
    if(age>=18){
        printf("you are eligible\n",age);
    }else{
        printf("you are not eligible\n",age);
    }
}
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    CheckEligibility(age);
    return 0;
}