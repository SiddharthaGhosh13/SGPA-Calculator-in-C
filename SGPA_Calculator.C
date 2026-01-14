#include<stdio.h>
int main(){
<<<<<<< HEAD
    int Sub;
    printf("Enter number of subjects: ");
    scanf("%d",&Sub);
    printf("Enter credit & grade points: \n");
    int i=1;
    float Credit,Grade,TotalPoints=0,TotalCredit=0;
    while(i<=Sub){
        printf("Subject %d: ",i);
        scanf("%f %f",&Credit,&Grade);
=======
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
        if(Marks>=89.5)
            Grade=10;
        else if(Marks>=79.5)
            Grade=9;
        else if(Marks>=69.5)
            Grade=8;
        else if(Marks>=59.5)
            Grade=7;
        else if(Marks>=49.5)
            Grade=6;
        else if(Marks>=39.5)
            Grade=5;
        else if(Marks>=29.5)
            Grade=4;
        else if(Marks>=19.5)
            Grade=3;
        else if(Marks>=9.5)
            Grade=2;
        else if(Marks<10)
            Grade=1;
        else
            Grade=0;
>>>>>>> d59799cb720466defc58f9f13222b16c708e0e38
        TotalPoints=TotalPoints+(Credit*Grade);
        TotalCredit=(TotalCredit+Credit);
        i++;
    }
    float SGPA=(TotalPoints/TotalCredit);
    printf("Your SGPA is:%f\n",SGPA);
    return 0;
}