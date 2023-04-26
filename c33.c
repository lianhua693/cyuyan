//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
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
	printf("之后的数组是:");
	    for (i = 0; i < 11; i++){
	    	printf("%-4d", a[i]);
		}
		printf("\n");
		return 0;
}
