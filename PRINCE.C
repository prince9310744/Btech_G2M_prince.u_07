#include <stdio.h>

int main() {

    int n;
   
    
    printf("enert year to check --->");
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||(n%400==00))
    {
        printf("this is a leap year");
    }
    else
    {
        printf("entered year is not a leap year");
    }

    
   
    return 0;
}
