#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	float s = 0;
	
	for(int i=1;i<=n;i++){
		s = s + 1.0/i;
	}
	printf("s = %f",s);
}
