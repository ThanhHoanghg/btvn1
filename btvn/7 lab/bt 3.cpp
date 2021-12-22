#include <stdio.h>
int main(){
	int n;
	printf("so gia tri cua mang :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap so=");
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap so x=");
	scanf("%d",&x);
	int flag = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
		printf("%d nam trong mang\n",x);
		flag = 1;
		break;
		}
	}
	if(flag == 0){
		printf("%d khong nam trong danh dach mang",x);
	}
}
