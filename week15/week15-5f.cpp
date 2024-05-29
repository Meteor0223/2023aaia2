#include <stdio.h>
int main(){
	int N,ans=0;
	scanf("%d",&N);
	for(int i=1;i<N;i++){
		if(i*i==N){
			ans=i;
			break;
		}
	}
	printf("%d",ans);
}