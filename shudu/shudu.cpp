//#include "button.h"
//#include"clock.hpp"
#include"shuduku.h"
#include"common.h"
int main() {
	initgraph(WIDGET_WIDTH, WIDGET_HEIGHT);
	setbkcolor(RGB(200, 230, 250));
	cleardevice();//Ӧ�ñ���ɫ�������󸲸���������
	//Button button(D, D, B_WIDTH, B_HEIGHT, RGB(140, 240, 230), RGB(135, 206, 235), "0");
	//button.Show();
	Shuduku shuduku;
	ExMessage msg;
	BeginBatchDraw();  //˫���壬��ֹ����
	while (1) {
		peekmessage(&msg, EM_MOUSE);
		shuduku.DrawMap();
		/*if (button.ClickButton(msg) && Timer::tTimer(100, 0)) {
			button.SetText();
		}*/
		FlushBatchDraw();
	}
	EndBatchDraw();  //����˫����
	closegraph();//�ر�ͼ�δ��ڲ��ͷ������Դ
	return 0;
}