//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
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
