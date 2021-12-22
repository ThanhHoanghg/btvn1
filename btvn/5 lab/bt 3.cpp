#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	int x1=1, x2=1, x3=2;
	for(int i=4;i<=n;i++){
		x1=x2;
		x2=x3; 
		x3=x2+x1;
	}
	printf("so phai tim la :%d",x3);
}
