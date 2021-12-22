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
	int count =0, max = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count ++;
			if(count > max){
				max = count;
			}
		}
	}
	printf("so luong so duogn lien tiep : %d",max);
}
	
