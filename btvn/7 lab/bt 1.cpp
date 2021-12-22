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
	int s = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			s = s + arr[i] ;
		}
	}
	if(s != 0){
		printf("tong cac so le :%d",s);
	}else{
		printf("mang khong co so le ");
	}
}
