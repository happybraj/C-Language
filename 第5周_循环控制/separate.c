#include<stdio.h>
int main(){

	int x=0;
	int d=0;
	int mask=1;
	scanf("%d",&x);
	int t;
	t = x;
	// x>9 equals x>=10 
	while(t>9){
		t = t/10;
		mask *= 10;
		printf("t=%d,mask=%d\n",t,mask);
	} 
	while(mask>0){
		d = x/mask;
		x = x%mask;
		mask = mask/10;
		printf("%d",d);
		if(mask > 0){
			printf(" ");
		}
	}
}
//12345/10000 1
//12345%10000 2345
//2345/1000 2
//2345%1000 345
//345/100 3
//345%100 45
//45/10 4
//45%10 5
//5%1 0
//5/1 5
