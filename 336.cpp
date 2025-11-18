# include<stdio.h>
void biggest( int a, int b);
int main()
{
 printf("enter a,b,c values:");
 scanf("%d%d%d",&a,&b,&c);
 biggest(a,b,c);
return 0;
}
void biggest(int a,int b,int c)
{
 if(a>b && a>c)
printf("\n A is big");
else if(b>c)
printf("\n B is big");
else
printf("\n c is big");
}
else
return c;
}
