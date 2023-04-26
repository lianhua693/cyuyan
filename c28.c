//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
#include <stdio.h>
#include "string.h"

int main(){
	
	char str[] = "ilovecprodlfkajd;flnaguage";
	printf("%s\n", str);
	char s = 'e';
	printf("%c\n, s");
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == s){
			for(int j=i;j< strlen(str);j++){
				str[j] = str[j+1];
			}
		}
	}
	printf("%s\n",str);
}
