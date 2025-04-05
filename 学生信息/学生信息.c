#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//定义结构体学生类型，然后，用结构体变量存储和访问。
struct student{
		int num;
		char name[20];
		int age;
		float score;
	} student1; 
int main(int argc, char *argv[]) {
	printf("请输入学号、姓名、年龄、成绩！\n"); 
	scanf("%d%s%d%f",&student1.num,student1.name,&student1.age,&student1.score);
	printf("该学生信息为：\n 学号:%d  姓名:%s  年龄:%3d  成绩:%.2f",student1.num,student1.name,student1.age,student1.score);
	return 0;
}
