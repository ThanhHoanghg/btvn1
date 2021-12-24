#include <stdio.h>
int main(){
	int n;
	printf("nhap mang =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so trong mang =");
		scanf("%d",arr[i]);
	}
	int x;
	printf("nhap x:");
	scanf("%d",&x);
	int temp = x;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1;j++){
			if(arr[j]<x){
				temp = arr[j];
			}
		}
		if(arr[i]>temp && arr[i]<x){
			temp = arr[i];
		}
	}
	if (temp == x){
		printf("khong co so nho hon x");
	}else{
		printf("so gan x nhat : %d",temp);
	}
}

