#pragma once
#include"common.h"
class Button {
protected:
	int x, y, b_width, b_height;
	string text;
	COLORREF inColor;
	COLORREF outColor;
public:
	Button(int x = D, int y = D, int b_width = B_WIDTH, int b_height = B_HEIGHT, COLORREF inColor = RGB(140, 240, 230), COLORREF outColor = RGB(135, 206, 235), string text = "0");
	void Show();
	bool MouseInButton(ExMessage msg);//����Ƿ��ڰ�ť��
	bool ClickButton(ExMessage& msg);//�жϵ�ǰ�Ƿ����˰�ť
	void SetText();
	~Button() { ; }
};