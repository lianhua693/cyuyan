#include <stdio.h>
int main(){
	int score=0;
	char grade;
	grade = (score>=90)?'A': ((score>=60)?'B':'C');
	printf("grade=%c\n", grade);
	return 0;	
}
