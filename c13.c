//输入两个正整数m和n，求其最大公约数和最小公倍数。1
#include <stdio.h>
int main(){
	int a = 885;
	int b = 615;
	int r;
	 r = a%b;
	 
	 while(r!=0){
	 	a = b;
	 	b = r;
	 	r = a%b;
	 } 
	 printf("所以，最大公约数是: %d\n", b);
	 return 0;
}
