//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
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
