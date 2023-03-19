#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("In a triangle:\n");
    printf("Enter side1 : ");
    scanf("%d",&s1);
    printf("Enter side2 : ");
    scanf("%d",&s2);
    printf("Enter side3 : ");
    scanf("%d",&s3);
    
    if((s1==s2) && (s2==s3) && (s3==s1)){
        printf("It\'s EQUILATERAL");
    }
    
    else if((s1==s2) || (s2==s3) || (s3==s1)){
        printf("It\'s ISOSCELES");
    }
    
    else{
        printf("It\'s SCALENE");
    }

    return 0;
}
