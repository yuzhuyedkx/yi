#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//用数组存储多个学生信息。
struct Student{
	int num;
	char name[20];
	float score;
    };
int main(int argc, char *argv[]) {
	struct Student stu[5]={{10101,"李欣",97},{10102,"张敏",99},
	{10103,"刘潇",89},{10104,"朱曦",99},{10105,"颜妍",96}};
	int i;
	for(i=0;i<5;i++)
	printf("%d  %s  %.2f\n",stu[i].num,stu[i].name,stu[i].score);
	return 0;
}
