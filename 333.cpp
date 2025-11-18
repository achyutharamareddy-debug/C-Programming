#include<stdio.h>
int L();
int main() {
	L();
} int L() {
	int a,b,c,B;
	printf("enter a,b,c values: ");
	scanf("%d%d%d",&a,&b,&c);
	B=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("B=%d",B);
	return 0;
}
