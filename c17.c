//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include <stdio.h>
int main(){
	float h=100;
	float s=100;
	h = h/2;
	int i;

    for(i=2 ;i<=10 ;i++){
    	s = s + h*2;
    	h = h/2;
	}
	printf("s=%f,h=%f\n", s,h);
	return 0;
}
