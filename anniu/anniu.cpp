#include"common.h"
#include"button.h"
int main() {
	initgraph(600, 600);
	setbkcolor(RGB(200, 230, 250));
	cleardevice();//Ӧ�ñ���ɫ�������󸲸���������
	Button button(60, 60, B_WIDTH, B_HEIGHT, RGB(173, 216, 230),RGB(135, 206, 235), "3");
	button.Show();
	ExMessage msg;
	BeginBatchDraw();  //˫���壬��ֹ����
	while (1) {
		peekmessage(&msg, EM_MOUSE);
		button.Show();
		if (button.MouseInButton(msg)) {};
		FlushBatchDraw();
	}
	EndBatchDraw();  //����˫����
	closegraph();//�ر�ͼ�δ��ڲ��ͷ������Դ
	return 0;
}