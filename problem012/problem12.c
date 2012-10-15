#include <stdio.h>

int main(void){
	int i=1,j,m;
	long long int sum=0;
	while(1){
		sum+=i;
		m=0;
		for(j=1;j<=sum/2;j++){
			if(sum%j==0){
				m++;
			}
		}
		if(m+1>500){
			break;
		}
		i++;
	}
	printf("%lld\n",sum);
	return 0;
}
