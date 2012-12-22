#include <stdio.h>

int main(void){
	int ans=0;//答えを入力
	int loop_i;//ループ用
	
	for(loop_i=0; loop_i<1000;loop_i++){
		if(loop_i%3==0 || loop_i%5==0)
			ans += loop_i;//もしloop_iが3か5の倍数なら、ansに足す
	}
	
	printf("answer :%d\n",ans);//答えを入力
	
	//SublimeText2からプッシュのテスト
	return 0;
}
