# include<stdio.h>
# include<string.h>
int main()
{
	char a[200],b[200];
	printf("\n enter any string");
	gets(a);
	printf("\n enter another string");
	gets(b);
	strcat(a,b);
	puts(a);
	return 0;
}
