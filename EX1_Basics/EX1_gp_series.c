#include <stdio.h>

void gp(){
    int a,r,n,i;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter common ratio(r): ");
    scanf("%d",&r);
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("The GP series is %d,",a);
    
    for(i=1 ; i<=n ; i++){
        printf("%d,",a*r);
        if(i==n)
            printf("... in which %d is the %dth term",a,n);
        a*=r;
    }
}

int main()
{
    gp();
    return 0;
}
