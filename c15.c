//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
#include <stdio.h>
int main(){
	int n = 1;
	int a = 2;
	int t = a;
	int sum = 0;
	while(n<=5){
		a *= 10;
		a+=t;
		printf("a=%d\n",a);
		sum += a;
		n++;
	}
	printf("sum = %d\n", sum);
	return 0;
} 
