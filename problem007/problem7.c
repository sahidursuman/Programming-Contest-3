#include <stdio.h>
#define N_MAX 10001
int x[N_MAX + 5];
int main(void){
	int i,j,k;
	x[0]=2;
	x[1]=3;
	k=2;
	i=3;
	while(1){
		for(j=1;j< k;j++){
			if(i % x[j] == 0){
				break;
			}
		}
		if(j == k){
			x[k] = i;
			++k;
			//printf("%d %d \n",k,i);
			if(k == N_MAX){
				printf("%d\n",i);
			}
		}
		i += 2;
	}
	return 0;
}

