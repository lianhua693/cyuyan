//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
#include <stdio.h>

int main(){
	int a[11] = {1,4,6,9,13,16,19,28,40,100};
	int b = 10;
	int i;
	int j;
	
	if(b > a[9]){
		a[10] = b;
	}else{
		for(i = 0; i<10; i++){
			if(a[i]<b){
				continue;;
			}else{
				for(j=9; j>=i; j--){
					a[j+1] = b;
				}
				a[j+1] = b;
			}
			break;;
		}
	}
	printf("֮���������:");
	    for (i = 0; i < 11; i++){
	    	printf("%-4d", a[i]);
		}
		printf("\n");
		return 0;
}
