#include <stdio.h>
int main(){
	int n;
	do{
	
	printf("nhap n =");
	
	scanf("%d",&n);
	}	while(n<=0);
	int i = 1, count = 0;
	while(i<=0){
		if(n%i==0){
			count ++;
		}else{
			
		}
		i++;
		}
		if(count==2){
			printf("day la so nguyen to",n);
		}else{
			printf("day khong phai so nguyen to",n);
		}
	
}
