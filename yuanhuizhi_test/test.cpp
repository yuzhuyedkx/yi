#include<iostream>
#include<graphics.h>
#include<conio.h>
int main() {
	initgraph(600, 600);//创建一个600*600的窗口
	circle(300, 300, 200);//在窗口中心画一个半径为300的圆
	_getch();//暂停程序，防止画面一闪而过
	closegraph();//关闭绘图窗口
	return 0;
}