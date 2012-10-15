#include <stdio.h>

int main(void){
	int a,b,c,ans_a,ans_b,ans_c;
	for(a=0;a<1000;a++){
		for(b=0;b<1000;b++){
			for(c=0;c<1000;c++){
				if((a*a)+(b*b)==(c*c)){
					if(a+b+c==1000&&a!=0&&b!=0){
						ans_a=a;
						ans_b=b;
						ans_c=c;
						break;
					}
				}
			}
		}
	}
	printf("%d \n",ans_a*ans_b*ans_c);
	return 0;
}
						
			
