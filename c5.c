//输入三个整数x,y,z，请把这三个数由小到大输出。
#include <stdio.h>
int main(int argc, const char * argv[]){
	int a, b, c;
	a = 15;
	b = 20;
	c = 8;
	int sum = a + b + c;
	printf("smallest %d\n", (a<b?a:b)<c?(a<b?a:b):c);
	printf("largest %d\n", (a>b?:b)>c?(a>b?a:b):c);
	printf("in the middle %d\n",sum-((a<b?a:b)<c?(a<b?a:b):c)-((a>b?:b)>c?(a>b?a:b):c));
	return 0;
}
