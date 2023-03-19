#include<stdio.h>

int rev(int a){
    int rev=0; 
    int digit;
    
    while(a!=0){
        digit = a%10;
        rev = rev*10 + digit;
        a /=10;
    }
    return rev;
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   
   printf("Reverse number: %d",rev(n));
}
