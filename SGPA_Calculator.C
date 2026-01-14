#include<stdio.h>
int main(){
    int Sub;
    printf("Enter number of subjects: ");
    scanf("%d",&Sub);
    printf("Enter credit & grade points: \n");
    int i=1;
    float Credit,Grade,TotalPoints=0,TotalCredit=0;
    while(i<=Sub){
        printf("Subject %d: ",i);
        scanf("%f %f",&Credit,&Grade);
        TotalPoints=TotalPoints+(Credit*Grade);
        TotalCredit=(TotalCredit+Credit);
        i++;
    }
    float SGPA=(TotalPoints/TotalCredit);
    printf("Your SGPA is:%f\n",SGPA);
    return 0;
}