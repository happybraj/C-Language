#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

/* 声明结构的三种形式 
 struct point{
 	int x;
 	int y;
 };

 struct point p1,p2;
 
 struct{
 	int x;
 	int y;
 } p1,p2;

 struct point{
 	int x;
 	int y;
 } p1,p2;
*/

int main(){
	struct date today;
	today = (struct date){07,8,2025};
	/* 相当于
	today.month = 07; 
	today.day = 8;  
	today.year = 2025; */
	
	struct date day;
	day = today;
	day.year = 2015;
	
	// 结构指针
	struct date *pDate = &today; 
	
	printf("Today's date is %i-%i-%i\n",
		today.year,today.month,today.day);
	printf("Today's date is %i-%i-%i\n",
		day.year,day.month,day.day);
		
	printf("address of today is %p\n",pDate);
	
	return 0;
	
}
