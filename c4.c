//输入某年某月某日，判断这一天是这一年的第几天？ 
#include <stdio.h>

int main(int arge, const char * argv[]){
	int day, month, year;
	int sum = 0;
	
    printf("please input year and moth and day:");
    scanf("%d,%d,%d", &year, &month, &day);
    printf("year = %d, moth = %d, day = %d\n", year, month,day);
    
    switch(month){
    	case 1:printf("1月份\n");sum=0;break;
    	case 2:printf("2月份\n");sum=31;break;
    	case 3:printf("3月份\n");sum=59;break;
    	case 4:printf("4月份\n");sum=90;break;
    	default:printf("holiday");break;
	}
	
	sum = sum + day;
	printf("总天数是%d\n",sum);
}
	
