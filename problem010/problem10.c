#include <stdio.h>

int prime_judge(int);
int flug;

int main(void){
	int i;
	long long int sum=0;
	for(i=2;i<=2000000;i++){//0,1は素数ではないので省く
		flug=1;
		prime_judge(i);
		if(flug==1){
			sum+=i;
		}
	}
	printf("%lld\n",sum);
	return 0;
}


int prime_judge(int a){
	int j,n = 0,b=a;//nが初期化されてなかった
	int half=b/2;
	for(j=2;j<=half;j++){
		if(a%j==0){
			n++;
		}
		if(n>=1){//jはaの半分しか行かないから一回でも割り切れたら素数じゃなくなる。
			flug=0;
			break;
		}
	}
	return 0;
}	
		
