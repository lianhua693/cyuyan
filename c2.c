//��ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������
#include <stdio.h>

int main(int argc,const char * argv[]){
	int profit = 0;
	int bonus =0;
	int bonus1 = 100000*0.1;
	int bonus2 = bonus1+100000*0.075;
	int bonus3 = bonus2+200000*0.05;
	int bonus4 = bonus3+200000*0.03;
	int bonus5 = bonus4+400000*0.015;
	
	scanf("%d", &profit);
	
	if(profit <= 100000){
		bonus = profit*0.1;
	}else if(profit <= 200000){
		bonus = bonus1 + (profit-100000)*0.075;
	}else if(profit <= 400000){
		bonus = bonus2 + (profit-200000)*0.05;
	}else if(profit <= 600000){
		bonus = bonus3 + (profit-400000)*0.03;
	}else if(profit <= 1000000){
	   	bonus = bonus4 + (profit-600000)*0.015;                                	
	}else{
	    bonus = bonus5 + (profit-1000000)*0.01;
	}
	
	printf("bonus = %d\n", bonus);
	
	return 0;
}

