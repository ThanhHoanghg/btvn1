#include <stdio.h>
int main (){
	int d;
	printf("so nguyen =");
	scanf("%d",&d);
	
	if(d<=2 && d>=7){
		printf("day la thu: %d",d);
	}else{
		if(d==8){
			printf("day la chu nhat");
		}else{
			printf("khong phai ngay trong tuan");
	}
}
}

