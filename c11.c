//将一个正整数分解质因数
#include  <stdio.h>

int main(){
	
	int m = 29;
	int i;
	for(i=2;i<=m;i++){
		while(m%i==0){
			printf("%d ",i);
			m = m/i;
		}
	}
	return 0;
}
