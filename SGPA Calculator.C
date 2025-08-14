#include<stdio.h>
int main(){
    int Sub;
    printf("Enter Number Of Subjects: ");
    scanf("%d",&Sub);
    int i=1;
    float Marks,TotalMarks=0;
    while(i<=Sub){
        printf("Subject%d Marks: ",i);
        scanf("%f",&Marks);
        TotalMarks=TotalMarks+Marks;
        i++;
    }
    float Percentage=(TotalMarks/Sub);
    float CGPA=(Percentage/9.5);
    printf("Your Percentage is:%f\n",Percentage);
    printf("Your CGPA is:%f\n",CGPA);
    return 0;
}