#include<stdio.h>
void MultiplicationTable(int number){
    for(int counter=1;counter<=12;counter++){
        printf("%d*%d=%d\n",number,counter,number*counter);}
}
int main (){
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    MultiplicationTable(number);
    return 0;

}