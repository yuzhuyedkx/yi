#pragma once
#include"common.h"
class Button {
protected:
	int x, y, b_width, b_height;
	string text;
	COLORREF inColor;
	COLORREF outColor;
public:
	Button(int x = 0, int y = 0, int b_width = B_WIDTH, int b_height = B_HEIGHT, COLORREF inColor = RGB(0, 250, 250), COLORREF outColor=RGB(135,206,235), string text = "0");
	void Show();
	bool MouseInButton(ExMessage msg);//鼠标是否在按钮里
	bool ClickButton(ExMessage& msg);//判断当前是否点击了按钮
	void SetText();
	~Button() { ; }
};
