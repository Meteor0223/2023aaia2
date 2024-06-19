#include <stdio.h>
int p(int i){

	for(int j=2;j<i;j++){
		if(i%j==0)return 0;
	}
	return 1;
}
int main(){
	int a,b,i,j,ans=0;
	scanf("%d %d",&a,&b);

	for(i=a;i<=b;i++){
		if(p(i))ans+=1;
	}
	printf("%d\n",ans);
}
