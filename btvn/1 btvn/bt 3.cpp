#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	do{
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b =");
	scanf("%d",&b);
	printf("nhap c =");
	scanf("%d",&c);
	}while(a>b+c,b>a+c,c>a+b);
	float chuvi, s, p;
	chuvi = a+b+c;
	p = (float)chuvi/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi tam giac : %f",chuvi);
	printf("dien tich tam giac : %f",s);
}
