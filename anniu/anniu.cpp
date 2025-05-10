#include"common.h"
#include"button.h"
int main() {
	initgraph(600, 600);
	setbkcolor(RGB(200, 230, 250));
	cleardevice();//应用背景色，清屏后覆盖整个窗口
	Button button(60, 60, B_WIDTH, B_HEIGHT, RGB(173, 216, 230),RGB(135, 206, 235), "3");
	button.Show();
	ExMessage msg;
	BeginBatchDraw();  //双缓冲，防止闪屏
	while (1) {
		peekmessage(&msg, EM_MOUSE);
		button.Show();
		if (button.MouseInButton(msg)) {};
		FlushBatchDraw();
	}
	EndBatchDraw();  //结束双缓冲
	closegraph();//关闭图形窗口并释放相关资源
	return 0;
}