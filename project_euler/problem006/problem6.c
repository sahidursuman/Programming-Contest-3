#include <stdio.h>

int main(void){
	int i,j,sum=0,sum1=0,ans;
	for(i=1;i<=100;i++){
		sum=sum+i;
	}
	
	for(j=1;j<=100;j++){
		sum1=sum1+(j*j);
	}
	ans=sum*sum-sum1;
	printf("%d %d %d \n",sum,sum1,ans);
	return 0;
}

