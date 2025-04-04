#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//用指针变量访问结构体学生。
struct Student{
	int num;
	char name[20];
	float score;
};
struct Student stu[5]={{10101,"李欣",97},{10102,"张敏",99},
	{10103,"刘潇",89},{10104,"朱曦",99},{10105,"颜妍",96}};
int main(int argc, char *argv[]) {
	struct Student*p;
	for(p=stu;p<stu+5;p++)
	printf("%d  %s  %.2f\n",p->num,p->name,p->score);
	return 0;
}
