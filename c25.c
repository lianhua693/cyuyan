#include <stdio.h>

int main(){
	int number = 123;
	int g,s,b;
	b = number/100;
	printf("百位的值b=%d\n",b);
	s = number%100/10;
	printf("十位的值s=%d\n",s);
	g = number%100%10;
	printf("十位的值g=%d\n",g);
	if(b!=0){
		printf("是个三位数");
		printf("%d %d %d\n",g,s,b); 
	}else if(s != 0){
		printf("是个两位数");
		printf("%d %d\n",g,s); 
	}else if(g!=0){
		printf("是个个位数");
		printf("%d\n",g);
	}
	return 0;
}
