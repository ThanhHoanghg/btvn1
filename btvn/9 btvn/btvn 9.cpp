#include <stdio.h>
#include <math.h>


int nguyenTo(int n){

for (int i=2;i<=n;i++)
	if (n%i==0){
		return true;
		break;
	}else{
		return false;
  	}
}





int tongCacChuSo(int n){
	
	int s=0
	for(int i=0;i<=n;i++){
		s=s+i;
	}
	return s;
}





int chuViVaDienTich(int a; int b; int c){
	
	if(a<b+c && b<a+c && c<a+b){
		int chuvi, p, dientich;
				chuvi=a+b+c return chuvi;
				p=(float)(a+b+c)/2;
				dientich=sqrt(p*(p-a)*(p-b)*(p-c)) return dientich;
	}else{
		return false;
	}
}






int uocChungLonNhat(int a; intb){
	
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			break;
		} 
	}
	return i;
}





int boiChungNhoNhat(int a; intb){
	
	for(int i=0;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			break;
		}
	}
	return i;
}







