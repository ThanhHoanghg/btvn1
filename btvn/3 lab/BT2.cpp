#include <stdio.h>
int main(){
	int tk = 4000;
	int count=0;
	while(count<4){
		tk = tk + tk*8/100;
		count++;
	}
	printf("so tien sau khi gui:%d",tk);
	}

