# include<stdio.h>
int main()
{
	char a[200],b[100];
	int i;
	printf("\n enter any string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\n copied data %s",b);
	return 0;
}
