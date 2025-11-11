#include <stdio.h>
int main() 
{
    int a[100][100],b[100][100],r,c,i,j,s[100][100];
    printf("\n enter row and colum sizes: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n enter value at a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("enter value at b[%d][%d]: ",i,j);
    		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ s[i][j]=a[i][j]-b[i][j];
		}
		
	}
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{ printf("\t %d",s[i][j]);
		}
	}
	printf("\n");
    return 0;
}
