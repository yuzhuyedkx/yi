#include<stdio.h>
#include<graphics.h>//EasyX�ĺ���ͷ�ļ�
#include<conio.h>
int main() {
	//���Ʊ������������
	const int rows = 9;
	const int cols = 9;
	//��Ԫ��Ŀ�ȡ��߶�
	const int cell_width = 50;
	const int cell_height = 50;
	//���ര�ڱ�Ե�ľ���
	int d = 150;
	initgraph(cols * cell_width+d, rows * cell_height+d);//��������
	setbkcolor(WHITE);//���ñ���ɫΪ��ɫ
	//���Ʊ�����
	for (int i = 0; i <= rows; i++) {
		line(d/2, d/2 + cell_height * i, d/2 + rows * cell_width, d/2 + cell_height * i);
	}
	//���Ʊ������
	for (int i = 0; i <=cols; i++) {
		line(d/2 + cell_width * i, d/2, d/2 + cell_width * i, d/2 + cols * cell_height);
	}
	_getch();//�ȴ�����
	return 0;
}