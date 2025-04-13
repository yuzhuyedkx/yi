#include<stdio.h>
//birthday 
void Birthday(int year,int month,int day);
 int main(){
 	int year=0;
 	int month=0;
 	int day=0;
 	int ch;
 	printf("请输入出生年月日（例如:1999-09-04）:  ");
 	scanf("%4d %2d %2d",&year,&month,&day);
 	Birthday(year,month,day);
 	while((ch=getchar())!=EOF&&(ch=getchar())!='\n'){
 		;
	 }
	printf("请输入出生年月日（例如:1999-09-04）:  ");
 	scanf("%4d %2d %2d",&year,&month,&day);
 	Birthday(year,month,day);
 	return 0;
 }
void Birthday(int year,int month,int day){
	printf("year=%4d\n",year);
 	printf("month=%02d\n",month);
 	printf("day=%02d\n",day);
 	printf("---------------------\n");
} 
