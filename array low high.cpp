# include <stdio.h>
int main()
{ 
int a[100],n,i,search,found=0,mid,high,low;
printf("\n enter array size:");
scanf("%d",&n);
printf("\n enter%d values into array",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\n enter searching element:");
scanf("%d",& search);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(search==a[mid])
{printf("\n searching element find at %d location",mid);
found=1;
break;
	}	
	else if(search<a[mid])
	{
		low=mid+1;
	}
	else if(search>a[mid])
	{
		high= mid-1;
	}
}
}
