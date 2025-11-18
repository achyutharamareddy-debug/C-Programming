#include<stdio.h>
int addition( int a, int b);
int main()
{
  int a,b, result;
  printf("\n enter a,b values:");
  scanf("%d %d",&a,&b);
 result=addition(a,b);
printf("sum of digits=%d",result);
 return 0;
} 
  int addition(int a, int b)           // function definition
   {
     
     int c;
     c=a+b;
    return c;
}
