#include<stdio.h>

int main(){
    int yr,mth;
    
    printf("Enter the year : ");
    scanf("%d",&yr);
    
    printf("Enter the month : ");
    scanf("%d", &mth);
    
    if(mth==1 || mth==3 || mth==5 || mth==7 || mth==8 || mth==10 || mth==12){
        printf("No. of days : 31");
    }
    else if(mth==4 || mth==6 || mth==9 || mth==11){
        printf("No. of days : 30");
    }
    else if(mth==2){
        if((yr%400==0) || (yr%4==0 && yr%100!=0))
            printf("No. of days : 29");
        else
            printf("No. of days : 28");
    }
    else{
        printf("Pls enter the month correctly!");
    }
}
