#include<stdio.h>
float calculatetotal(float a,float b,float c){return (a+b+c);}
float calculateaverage(float total){return total/3;}
void DisplayGrade(float average){
    if(average>=75){
        printf("Grade=A\n");
    }else if(average>=60){
        printf("Grade=B\n");
    }else if(average>=50){
        printf("Grade=C\n");
    }else if(average>=45){
        printf("Grade=D\n");
    }else{
        printf("Grade=F\n");
    }
}
void DisplayStatus(float average){
    if(average>=50){
        printf("Status=PASS\n");
    }else{
        printf("Status=FAIL\n");
    }
}
int main(){
    float C_programming,Mathematics,Electronics,Total,Average;
    printf("Enter C_programming score:\n");
    scanf("%f",&C_programming);
    printf("Enter Mathematics score:\n");
    scanf("%f",&Mathematics);
    printf("Enter Electronics score:\n");
    scanf("%f",&Electronics);
    Total=calculatetotal(C_programming,Mathematics,Electronics);
    Average=calculateaverage(Total);
    printf("\n..........STUDENT RESULT............\n");
    printf("C_programming=%.2f\n",C_programming);
    printf("Mathematics=%.2f\n",Mathematics);
    printf("Electronics=%.2f\n\n",Electronics);
    printf("Total Score=%.2f\n",Total);
    printf("Average Score=%.2f\n",Average);
    DisplayGrade(Average);
    DisplayStatus(Average);
    return 0;
}
