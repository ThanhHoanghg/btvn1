#include <stdio.h>
int main(){
	int a, b, uc, BC;
	do{
		printf("nhap a =");
		scanf("%d",&a);
		printf("nhap b =");
		scanf("%d",&b);
	}while(a<=0,b<=0);
	
	for(int uc = a;uc>=1,b;uc--){
		if(a%uc==0,b%uc==0){
			printf("uoc chung lon nhat la : %d\n",uc);
		}
	}
	for(int BC = a;BC<=a*b;BC++){
		if(BC%a==0,BC%b==0){
			printf("boi chung lon nhat la : %d\n",BC);
		}
	} 	 
}
	

