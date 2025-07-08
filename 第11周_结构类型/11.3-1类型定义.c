#include <stdio.h>
int main(){
	typedef long int64_t;
	typedef struct ADate {
		int month;
		int day;
		int year;
	} Date;
	
	// 也可以这样写 
	typedef struct{
		int month;
		int day;
		int year;
	} Date1;
	
	typedef int Length;// Length就等价于int类型
	
	typedef *char[10] Strings; // String是10个字符串的数组的类型 
	
	typedef struct node{
		int data;
		struct node *next;
	}aNode;// 这样用aNode就可以替代struct node 
	
	typedef struct node aNode;// 这样用aNode就可以替代struct node 
	
	int64_t i = 10000000;
	Date d = {9,1,2025};
	Date1 d1 = {9,1,2025};
}
