#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	printf("nhap a =");
	scanf("%f",&a);
	printf("nhap b =");
	scanf("%f",&b);
	printf("nhap c =");
	scanf("%f",&c);
	if (a==0){
		printf("pt co mot nghiem : %f",(-c/b));
	}else{
		if (b==0){
			printf("pt vo nghien");
		}else{
			if (c==0){
				printf("pt co vo so nghiem");
			}
		}
	}
	delta = b*b - 4*a*c;
	if (delta>0){
		printf("nghiem thu 1 : %f",(-b+sqrt(delta))/(2*a));
		printf("nghiem thu 2 : %f",(-b-sqrt(delta))/(2*a));
	}else{
		if (delta==0){
			printf("co mot nghiem : %f",(-b/2*a));
		}else{
			printf("pt vo nghiem");
		}
	}
	}
	



