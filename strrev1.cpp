# include<stdio.h>
# include<string.h>
int main()
{
	char str1[200];
	printf("\n enter any string");
	fgets(str1,200,stdin);
	strrev(str1);
	printf("\n reverse string %s",str1);
	return 0;
}
