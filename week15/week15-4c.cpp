#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[j][i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[j][i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[j][i]=0;
			for(k=0;k<n;k++){
				c[j][i]+=b[j][k]*a[k][i];
			}
			printf("%3d ",c[j][i]);
		}
		printf("\n");
	}
}