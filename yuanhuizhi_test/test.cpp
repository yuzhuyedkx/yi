#include<iostream>
#include<graphics.h>
#include<conio.h>
int main() {
	initgraph(600, 600);//����һ��600*600�Ĵ���
	circle(300, 300, 200);//�ڴ������Ļ�һ���뾶Ϊ300��Բ
	_getch();//��ͣ���򣬷�ֹ����һ������
	closegraph();//�رջ�ͼ����
	return 0;
}