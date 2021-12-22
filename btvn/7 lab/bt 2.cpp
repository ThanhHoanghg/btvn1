#include <stdio.h>
int main(){
	int n;
	printf("kich thuoc mang");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so:");
		scanf("%d",arr[i]);
	}
	for(int i=n-1;i<n;i--){
		if(arr[i]%2==0){
			printf("so le cuoi cung la: %d",arr[i]);
			break;
		}else{
			printf("khong co so le");
		}
	}
}
