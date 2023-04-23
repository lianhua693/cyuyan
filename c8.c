//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
#include <stdio.h>

int main(int argc, const char * argv[]) {
	
	int a = 1;
	int b = 2;
	
	for(int i = 1;i<=10; i++){
		printf("%d,%d,",a,b);
		if(i%2==0)
		    printf("\n");
		    a = a + b;
		    b = b + a;
	}
}
