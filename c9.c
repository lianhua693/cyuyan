//判断 101 到 200 之间的素数。
#include <stdio.h>
#include <math.h>

int isPrimeNumber(int m){
	int i;
	int k=(int)sqrt((double)m);
	for(i=2; i<=k; i++){
		if(m%i == 0){
			break;
		}
	}
	if(i==k){
		return 1;
		
	}else{
		return 0;
	}
}
int main(){
	int jsPrimeNumber(int m);
	int j;
	
	for(j=101; j<=200; j++){
		if(isPrimeNumber(j)){
			printf("%d ",j);
		}
	}
	return 0;
}

