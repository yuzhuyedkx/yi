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
	//将文字居中显示
	settextstyle(B_HEIGHT * 2 / 3, 0, "楷体");
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
		this->inColor = RGB(140, 240, 230);   //鼠标在按钮中改变颜色
		return true;
	}
	this->inColor = this->outColor;  //鼠标不在按钮中还原颜色
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
	stream >> num;   //把字符串转换成整数
	num++;
	if (num > 9) {
		num = 0;
	}
	this->text = to_string(num);   //再把整数转换成字符串即可
}
