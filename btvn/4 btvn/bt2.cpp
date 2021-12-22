#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	if(n>0,n%2==1){
		float s = 0;
		for(int i=1;i<=n;i=i+2){
		s = s + 1.0/i;
	}
	printf("s = %f",s);
	}else{
		printf("N ban nhap khong phai so le");
	}
	
} 
