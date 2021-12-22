#include<stdio.h>
int main(){
	int a,b;
	printf("nhap so =");
	scanf("%d",&a);
	while(a>0){
		b = b*10 + a%10;
		a = a/10;
	}
	printf("so dao nguoc : %d",b);
}
