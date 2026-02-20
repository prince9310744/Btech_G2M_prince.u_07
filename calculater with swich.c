#include <stdio.h>

int main() {
  char n;
  int b,a,sum,dif,mul,divs,rem;
  printf("enter enter two numbers to perform operations::'+' '-' '*' '/'\n\n");
  printf("enter first numbers::");
  scanf("%d",&a);
  printf("enter second numbers::");
  scanf("%d",&b);
  printf("enter operaton '+' '-' '*' '/'--->");
  scanf(" %c",&n);
  switch (n)
  { 
      case ('+'):
      sum=a+b;
      printf("sum: %d+%d=%d\n",a,b,sum);
      break;
      case ('-'):
      dif=a-b;
      printf("differance:%d-%d=%d",a,b,dif);
      break;
      case ('*'):
      mul=a*b;
      printf("multiplication:%d*%d=%d",a,b,mul);
      break;
      case ('/'):
      divs=a/b;
      printf("division:%d//%d=%d",a,b,divs);
      break;
      case ('%'):
      rem=a%b;
      printf("remainder:%d%%d=%d",a,b,rem);
      break;
      
      
  }
      
  return 0;
}
  
  
  

