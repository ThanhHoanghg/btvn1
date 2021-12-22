#include <stdio.h>
int main (){
	int n;
	do{
		printf("nhap n =");
		scanf("%d",&n);
	}	while(n<=0);
	for(int i=1;i<n;i++){
		int s = 0;
		for(int j=1;j<=i/2;j++){
			if(i%j==0){
				s=s+j;
			}
		}
		if (s ==i){
			printf("so hoan hao = %d\n",i);
		}
	}
}

