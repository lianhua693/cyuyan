//求100之内的素数
#include <stdio.h>
#include "math.h"

 int isPrime(int n)
 {
 	if(n<= 1)
 	 return 0;
 	if(n == 2)
	 return 1;
	if(n%2 == 0)
	 return 0;
	int limit = (int)sqrt((double)n);
	for(int i = 3; i <= limit; i=i+2)
	{
		if(n % i == 0)
		    return 0;
	 } 
	 return 1;
 }
 
 int main()
 {
 	int isPrime(int n);
 	int i;
 	for(i=2; i<100; i++){
 		if(isPrime(i)){
 			printf("%d ", i);
		 }
	 }
	 return 0;
 }
