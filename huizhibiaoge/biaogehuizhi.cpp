#include<stdio.h>
#include<graphics.h>//EasyX的核心头文件
#include<conio.h>
int main() {
	//绘制表格行数、列数
	const int rows = 9;
	const int cols = 9;
	//单元格的宽度、高度
	const int cell_width = 50;
	const int cell_height = 50;
	//表格距窗口边缘的距离
	int d = 150;
	initgraph(cols * cell_width+d, rows * cell_height+d);//创建窗口
	setbkcolor(WHITE);//设置背景色为白色
	//绘制表格横线
	for (int i = 0; i <= rows; i++) {
		line(d/2, d/2 + cell_height * i, d/2 + rows * cell_width, d/2 + cell_height * i);
	}
	//绘制表格竖线
	for (int i = 0; i <=cols; i++) {
		line(d/2 + cell_width * i, d/2, d/2 + cell_width * i, d/2 + cols * cell_height);
	}
	_getch();//等待按键
	return 0;
}