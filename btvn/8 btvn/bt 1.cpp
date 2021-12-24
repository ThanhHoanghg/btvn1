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
	for(int i=0; i<n-1; i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	int x;
	printf(" nhap x=");
	scanf("%d",&x);
	for(int i=temp;i>0;i--){
		if(arr[i]<x){
			printf(" so nho hon va gan x nhat la : %d ",arr[i]);
			break;
		}
	}
}

