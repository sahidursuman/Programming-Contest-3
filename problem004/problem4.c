#include <stdio.h>
#include <string.h>

int palin(const char*,const char*);

int main(void){
	int a,b,c,max=0;
	char x[7],y[7];
	for(a=999;a>100;a--){
		for(b=999;b>100;b--){
			c=a*b;
			sprintf(x,"%d",c);
			strcpy(x,y);
			palin(x,y);
			if(x){
				if(c>max){
					max=c;
				}
			}
		}
	}
	printf("%d\n",max);
	return 0;
}

int palin(const char* p,const char* q){
	const char* q=p+strlen(p);
	if(p!=q) while(p<--q) if(*p++!=*q)return 0;
	return 1;
}
