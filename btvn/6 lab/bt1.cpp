#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap so nguyen n=");
		scanf("%d",&n);
	}while(n<=0);
	int s = 0;
	for(int i=1;i<=n;i++){
		s = s+i;
	}
	printf("tong cac so la:%d",s);
}
