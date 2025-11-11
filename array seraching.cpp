#include <stdio.h>
int main(){
	int a[50],i,search,n,found=0;
	printf("\n enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter value at a[%d]position",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter searching statement");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if( search==a[i])
		{ printf("\nsearching element found at %d",i);
		found=1;
		break;
		}
	}
	if(found==0)
	{ printf("\n  seraching element not found:");
	}
	return 0;
}
