#include<stdio.h>
int main(){
	int hour1,hour2;
	int minute1,minute2;
	
	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2 - t1;
	printf("时间差为%d时%d分。\n",t/60,t%60);
}
