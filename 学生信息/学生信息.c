#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����ṹ��ѧ�����ͣ�Ȼ���ýṹ������洢�ͷ��ʡ�
struct student{
		int num;
		char name[20];
		int age;
		float score;
	} student1; 
int main(int argc, char *argv[]) {
	printf("������ѧ�š����������䡢�ɼ���\n"); 
	scanf("%d%s%d%f",&student1.num,student1.name,&student1.age,&student1.score);
	printf("��ѧ����ϢΪ��\n ѧ��:%d  ����:%s  ����:%3d  �ɼ�:%.2f",student1.num,student1.name,student1.age,student1.score);
	return 0;
}
