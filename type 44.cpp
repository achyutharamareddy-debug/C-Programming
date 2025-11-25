# include<stdio.h>
int biggest( int a,int b, int c ,int d);  //function declaration
 int main()
{
	int a,b,c,d,big;
	printf("enter a,b,c and d values: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
    big =biggest(a,b,c,d);
    printf("\n %d is a biggest number",big);
    return 0;
}
int biggest(int a,int b,int c,int d)    // function definition
{ 
 if(a>b && a>c && a>d)
 {  
  return a;
}
 else if(b>c && b>d)
 {
 
 	return b;
 }
 
  else if(c>d)
{

  	return c;
  }
  else 
  return d;
}
