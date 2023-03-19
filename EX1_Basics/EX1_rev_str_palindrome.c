#include <stdio.h>
#include <string.h>

void rev(char a[]){
    int i=0; int temp;
    int l = strlen(a)-1;
    
    while(i<l){
        temp = a[i];
        a[i] = a[l];
        a[l] = temp;
        i++;
        l--;
    }
    
    puts(a);
}

int ispal(char a[]){
    int i=0; 
    int l=strlen(a)-1;
    while(i<l){
        if(a[i]!=a[l])
            return 0;
        i++; l--;
    }
    return 1;
}

int main()
{
    char str[50], rstr[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Its reverse is: ");
    rev(str);
    
    if(ispal(str)){
        printf("The given string is a PALINDROME!");
    }
    else{
        printf("The given string is NOT A PALINDROME!");
    }
    
    return 0;
}

