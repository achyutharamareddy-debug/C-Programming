# include <stdio.h>
int main()

{
    int a[100],n,i,j,temp;
  printf("\n enter array size");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\n enter value at a[%d]:",i);
      scanf("%d",&a[i]);
  }
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
        if (a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
          }
      }
   printf("\n after sorting");
   for(i=0;i<n;i++)
   {
       printf("\t %d",a[i]);
   }
return 0;
}	
	

