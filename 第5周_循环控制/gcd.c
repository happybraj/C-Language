#include<stdio.h>
int main(){
	int t=0;
	int a,b;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
}
