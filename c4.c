//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿 
#include <stdio.h>

int main(int arge, const char * argv[]){
	int day, month, year;
	int sum = 0;
	
    printf("please input year and moth and day:");
    scanf("%d,%d,%d", &year, &month, &day);
    printf("year = %d, moth = %d, day = %d\n", year, month,day);
    
    switch(month){
    	case 1:printf("1�·�\n");sum=0;break;
    	case 2:printf("2�·�\n");sum=31;break;
    	case 3:printf("3�·�\n");sum=59;break;
    	case 4:printf("4�·�\n");sum=90;break;
    	default:printf("holiday");break;
	}
	
	sum = sum + day;
	printf("��������%d\n",sum);
}
	
