#include <stdio.h>

int main(void){
	int sum=0;//答えを入力
	int loop_i;//ループ用
	
	for(loop_i=0; loop_i<1000;loop_i++){
		if(loop_i%3==0 || loop_i%5==0)
			sum += loop_i;//もしloop_iが3か5の倍数なら、sumに足す
	}
	
	printf("answer :%d\n",sum);//答えを入力
	
	return 0;
}
