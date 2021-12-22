#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap mang =",i);
		scanf("%d",arr[i]);
	}
	int count=0, max=0;
	for(int i=;i<n;i++){
		if(arr[i]%2==1){
			count++;
			if(count>max){
				count=max;
			}
		}
	}
	printf("so le cuoi cung la : %",);
}
