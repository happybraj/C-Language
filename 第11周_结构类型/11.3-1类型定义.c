#include <stdio.h>
int main(){
	typedef long int64_t;
	typedef struct ADate {
		int month;
		int day;
		int year;
	} Date;
	
	// Ҳ��������д 
	typedef struct{
		int month;
		int day;
		int year;
	} Date1;
	
	typedef int Length;// Length�͵ȼ���int����
	
	typedef *char[10] Strings; // String��10���ַ�������������� 
	
	typedef struct node{
		int data;
		struct node *next;
	}aNode;// ������aNode�Ϳ������struct node 
	
	typedef struct node aNode;// ������aNode�Ϳ������struct node 
	
	int64_t i = 10000000;
	Date d = {9,1,2025};
	Date1 d1 = {9,1,2025};
}
