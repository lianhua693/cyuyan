//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
#include <stdio.h>
int main(){
	
	char c;
	int letter=0;
	int number=0;
	int space=0;
	int other=0;
	c = getchar();
	while(c != '\n'){
       if( (c>='a' && c<='z') || (c>='A' && c<'Z')){
		letter++;
    	}else if( c >= '0' && c<='9'){
		number++;
    	}else if( c == ' '){
		space++;
    	}else{
		other++;
    	}
    	c = getchar();
}
    printf("��ĸ=%d,����=%d���ո�=%d������=%d\n",letter,number,space,other);
    return 0;
}

