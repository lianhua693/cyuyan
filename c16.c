//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
#include <stdio.h>
int compNum(int m){
	int n;
	int sum = 0;
	
	for(n=1;n<m;n++){
		if(m%n == 0){
			sum += n;
		}else{
			;
		}
	} 
	    if(m == sum){
	    	return 1;
		}else{
			return 0;
		}
}
int main(){
	int compNum(int m);
	int s = 6;
	for(s = 1; s <= 1000; s++){
		if(compNum(s)){
			printf("%d\n", s);
		}else{
		}
	}
	
	return 0;
	} 
