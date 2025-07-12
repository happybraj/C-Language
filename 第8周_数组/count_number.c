#include<stdio.h>
int main(){
	const int number = 10;
	int i;
	int count[10];
	int x;
	
	for(i=0; i<number; i++){
		count[i] = 0;
	}
	
	for(i=0; i<number; i++){
		if(x>=1 && x<=9){
			++count[x];
		}
		scanf("%d",&x); 
	}
	
	for(i=0; i<number; i++){
		printf("%d:%d\n",i,count[i]);
	}
}
