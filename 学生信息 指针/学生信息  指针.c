#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��ָ��������ʽṹ��ѧ����
struct Student{
	int num;
	char name[20];
	float score;
};
struct Student stu[5]={{10101,"����",97},{10102,"����",99},
	{10103,"����",89},{10104,"����",99},{10105,"����",96}};
int main(int argc, char *argv[]) {
	struct Student*p;
	for(p=stu;p<stu+5;p++)
	printf("%d  %s  %.2f\n",p->num,p->name,p->score);
	return 0;
}
