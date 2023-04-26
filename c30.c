//×Ö·û´®·´×ª
#include <stdio.h>
#include "string.h"
int main()
{
	char s[] = "I like kobe very much";
	int len = 0;
	char *p = s;
	while(*p != '\0'){
		len++;
		p++;
	}
	printf("len = %d\n",len);
	
	int i;
	char temp;
	for(i = 0; i < len/2 ; i++){
		temp = *(s+i);
		*(s+i) = *(s+len-1-i);
		*(s+len-1-i) = temp;
	}
	printf("%s\n", s);
	return 0;
 } 
