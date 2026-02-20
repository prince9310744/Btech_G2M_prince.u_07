#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
    while(true)
    {
    int n1,n2,n,s,c,d;
   
    printf("enter a number to check it is a armstrong number or not:::");
    scanf("%d",&n);
     n1=n2=n;
    c=0;
    s=0;
    while(n>0)
    { c=c+1;
     n=n/10;
    }
  while(n1>0){
      d=n1%10;
      s=s+pow(d,c);
      n1=n1/10;
      
  }
  if(n2==s){
      printf("%d is a armstrong number\n\n",s);
      
  }
  else{
      printf("%d is not an armstrong number\n\n",n2);
  }
  
    
    }
    
    return 0;
}