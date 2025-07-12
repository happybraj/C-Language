#include <stdio.h>

void swap(int a,int b);
int main(){
	int a,b;
	a=1,b=2;
	swap(a,b);
	printf("%d %d\n",a,b);
	return 0;
}

void swap(int a,int b){
	int t=0;
	t=a;
	a=b;
	b=t;
	printf("%d %d\n",a,b);
}

