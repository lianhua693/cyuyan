//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
#include <stdio.h>
int main(){
	int x=0,y=0,z=0;
	int i;
	
	for(i=100; i<=999; i++){
		x = i%10;
		y = i/10%10;
		z = i/100%10;
		
		if(i == (x*x*x + y*y*y + z*z*z)){
			printf("%d 是水仙花数\n",i);
		}
	}
	return 0;
} 
