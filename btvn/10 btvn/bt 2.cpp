#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("so chuoi :");
	scanf("%d",&n);
	char arrs[n][50];
		for(int i=0;i<n;i++){
		printf("nhap chuoi :");
		scanf("%s",arrs[i]);
	}
	printf("\nsau khi nhap:");
	for(int i=0;i<n;i++){
		printf("%s",arrs[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arrs[j],arrs[j+1])>0){
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
	printf("\nmang sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%s ",arrs[i]);
	}
}

	
