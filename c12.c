//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#include <stdio.h>
int main(){
	int score=0;
	char grade;
	grade = (score>=90)?'A': ((score>=60)?'B':'C');
	printf("grade=%c\n", grade);
	return 0;	
}