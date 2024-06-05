#include <stdio.h>
int main(){
	int K,ans=0;
	scanf("%d",&K);
	for(int N=1;N<K;N++){
		int now =(1+N)*N/2;
		if(now>K){
			ans=N;
			break;
		}
	}
	printf("%d",ans);
}