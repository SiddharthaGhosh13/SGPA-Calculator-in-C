#include<stdio.h>
int main(){
    int Subject;
    printf("Enter Number Of Subjects: ");
    scanf("%d",&Subject);
    printf("(Maximum Marks:100)\n");
    int i=1;
    float Credit,Grade,TotalPoints=0,TotalCredit=0,Marks;
    while(i<=Subject){
        printf("Subject%d Marks: ",i);
        scanf("%f",&Marks);
        printf("(Subject%d Credit): ",i);
        scanf("%f",&Credit);
        if(Marks>=90)
            Grade=10;
        else if(Marks>=80)
            Grade=9;
        else if(Marks>=70)
            Grade=8;
        else if(Marks>=60)
            Grade=7;
        else if(Marks>=50)
            Grade=6;
        else if(Marks>=40)
            Grade=5;
        else if(Marks>=30)
            Grade=4;
        else if(Marks>=20)
            Grade=3;
        else if(Marks>=10)
            Grade=2;
        else if(Marks<10)
            Grade=1;
        else
            Grade=0;
        TotalPoints=TotalPoints+(Credit*Grade);
        TotalCredit=(TotalCredit+Credit);
        i++;
    }
    float SGPA=(TotalPoints/TotalCredit);
    printf("Your SGPA is:%f\n",SGPA);
    return 0;
}