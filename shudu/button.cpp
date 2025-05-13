#include "button.h"
Button::Button(int x, int y, int b_width, int b_height, COLORREF inColor, COLORREF outColor, string text)
{
	this->x = x;
	this->y = y;
	this->b_width = b_width;
	this->b_height = b_height;
	this->inColor = inColor;
	this->outColor = outColor;
	this->text = text;
}
void Button::Show()
{
	setlinecolor(BLACK);
	fillrectangle(x, y, x + b_width, y + b_height);
	//�����־�����ʾ
	settextstyle(B_HEIGHT * 2 / 3, 0, "����");
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	int t_x = x + (B_WIDTH - textwidth(text.c_str())) / 2;
	int t_y = y + (B_HEIGHT - textheight(text.c_str())) / 2;
	outtextxy(t_x, t_y, text.c_str());
}
bool Button::MouseInButton(ExMessage msg)
{
	setfillcolor(inColor);
	if (msg.x > x && msg.x<x + b_width && msg.y>y && msg.y < y + b_height) {
		this->inColor = RGB(140, 240, 230);   //����ڰ�ť�иı���ɫ
		return true;
	}
	this->inColor = this->outColor;  //��겻�ڰ�ť�л�ԭ��ɫ
	return false;
}
bool Button::ClickButton(ExMessage& msg)
{
	if (MouseInButton(msg) && msg.message == WM_LBUTTONUP) {
		msg.message = WM_RBUTTONDOWN;
		return true;
	}
	return false;
}
void Button::SetText()
{
	stringstream stream(text);
	int num = 0;
	stream >> num;   //���ַ���ת��������
	num++;
	if (num > 9) {
		num = 0;
	}
	this->text = to_string(num);   //�ٰ�����ת�����ַ�������
}
