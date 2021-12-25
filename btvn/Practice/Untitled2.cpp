#include <stdio.h>
void print(int ary[], int n){
	for(int i=0;i<n;i++){
		printf("%d",ary[i]);
	}
	
}


void reverse(int ary[], int n){
	int temp;
	for(int i=0;i<n;i++){
		temp = ary[i];
        ary[i] = ary[n - i - 1];
        ary[n - i - 1] = temp;
	}
}

int main(void){
	int n; 
	printf("nhap n:");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("ary[n]=",i);
		scanf("%d",ary[i]);	
	}
	if(n>1){
		int ary[n];
		for(int i=0;i<n;i++){
			printf("ary[n]=",i);
			scanf("%d",ary[i]);	
		}
		int x =sizeof(ary)/sizeof(ary[0]);
		reverse(ary,x);
		print(ary,x);
	}else{
		printf("n khong hop le");
	}
	
}
