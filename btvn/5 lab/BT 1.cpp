#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap n =");
		scanf("%d",&n);
	}while(n<=0);
	int s = 0;
	for(int i = 1; i <=n; i++){
		if(n%i==0){
			s = s + i;
			printf("cac uoc la : %d\n",i);
		}
	}
	printf("tong cac uoc la: %d",s);
}
