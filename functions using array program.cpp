#include<stdio.h>
void display(int a[6]){
	int i;
	for(i=0;i<6;i++){
		printf("\t%d",a[i]);
	}
}
 int main() {
 	 int a[6]={5,6,7,8,9,1};
 	 display(a);
 	 return 0;
 }

