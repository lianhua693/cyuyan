#include <stdio.h>

int main(){
	int number = 123;
	int g,s,b;
	b = number/100;
	printf("��λ��ֵb=%d\n",b);
	s = number%100/10;
	printf("ʮλ��ֵs=%d\n",s);
	g = number%100%10;
	printf("ʮλ��ֵg=%d\n",g);
	if(b!=0){
		printf("�Ǹ���λ��");
		printf("%d %d %d\n",g,s,b); 
	}else if(s != 0){
		printf("�Ǹ���λ��");
		printf("%d %d\n",g,s); 
	}else if(g!=0){
		printf("�Ǹ���λ��");
		printf("%d\n",g);
	}
	return 0;
}
