//��������������m��n���������Լ������С��������1
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
	 printf("���ԣ����Լ����: %d\n", b);
	 return 0;
}
