#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
	int max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	if(d>max)max=d;
	return max;
}
int min(int a,int b,int c,int d){
	int min=a;
	if(b<min)min=b;
	if(c<min)min=c;
	if(d<min)min=d;
	return min;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* �W��C++ main �禡 ���P�� �U�� C �� main �禡
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
