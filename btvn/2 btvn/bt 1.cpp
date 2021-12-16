#include <stdio.h>
 
int main(){
    int a;
    do{
	printf("so nguyen =");
    scanf("%d",&a);
	}while(a<=0);
	int b = 0;
    while(a>0){
    	b = b * 10 + a % 10;
    	a = a / 10 ;
	}
	printf("\nso dao nguoc = %d",b);

}
    	
