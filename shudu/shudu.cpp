//#include "button.h"
//#include"clock.hpp"
#include"shuduku.h"
#include"common.h"
int main() {
	initgraph(WIDGET_WIDTH, WIDGET_HEIGHT);
	setbkcolor(RGB(200, 230, 250));
	cleardevice();//应用背景色，清屏后覆盖整个窗口
	//Button button(D, D, B_WIDTH, B_HEIGHT, RGB(140, 240, 230), RGB(135, 206, 235), "0");
	//button.Show();
	Shuduku shuduku;
	ExMessage msg;
	BeginBatchDraw();  //双缓冲，防止闪屏
	while (1) {
		peekmessage(&msg, EM_MOUSE);
		shuduku.DrawMap();
		/*if (button.ClickButton(msg) && Timer::tTimer(100, 0)) {
			button.SetText();
		}*/
		FlushBatchDraw();
	}
	EndBatchDraw();  //结束双缓冲
	closegraph();//关闭图形窗口并释放相关资源
	return 0;
}