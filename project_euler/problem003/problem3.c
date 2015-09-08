#include <stdio.h>

int main(void){
	int i,a=0,ans=1;
	long long int q,num=600851475143;
	q=num;
	for(i=2;i<=num;i++){
		if(num%i==0){
			num/=i;
			ans=ans*i;
			if(i>a){
				a=i;
			}
			continue;
		}
		if(ans==q){
			break;
		}
	}
	printf("%d\n",a);
	return 0;
}
		
