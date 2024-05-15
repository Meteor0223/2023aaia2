# include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n;
    //yourcode
    //Part 1:intput a[i][j]
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Part 2: output a[i][j]
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(k=0;k<n;k++){
                printf("%3d ",a[i][j]);    
            }
        }
        printf("\n");
    }
}