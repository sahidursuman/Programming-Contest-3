#include <stdio.h>
#define NUM_MAX 4000000

int calc(int ,int);

int main(void){
	int num,sum,a=1,b=2;
	sum=0;
	sum=calc(b,sum);
	while(1){
		num=a+b;
		sum=calc(num,sum);
		
		a=b;
		b=num;
		if(num>=NUMMAX){
			break;
		}
	}
	printf("%d\n",sum);
	return 0;
}
	
int calc(int num,int sum){
	if(num%2==0){
		sum+=num;
	}
	return sum;
}
