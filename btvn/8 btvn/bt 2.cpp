#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for( int i=0;i<n;i++){
		int flag = 0;
		printf("nhap gia tri arr[%d]=",i);
		scanf("%d",&arr[i]);

		for(int j=0;j<=i;j++){
			if(arr[j]== arr[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			i--;
		}
	}
	printf("mang sau khi nhap: \n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
