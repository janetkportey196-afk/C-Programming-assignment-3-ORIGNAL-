#include<stdio.h>
void ExamGrade(float score){
    if(score>=80 && score<=100){
        printf("80-100:A\n",score);
    }else if(score>=70 && score<=79){
        printf("70-79:B\n",score);
    }else if(score>=60 && score<=69){
        printf("60-69:C\n",score);
    }else if(score>=50 && score<=59){
        printf("50-59:D\n",score);
    }else{
        printf("Below 50:F\n",score);
    }
}
int main(){
    float score;
    printf("enter score\n");
    scanf("%f",&score);
    ExamGrade(score);
    return 0;
}