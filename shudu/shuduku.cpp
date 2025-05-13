#include "shuduku.h"
#include"button.h"
Shuduku::Shuduku()
{
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map[i].size(); j++) {
			int x = D+B_WIDTH*j;
			int y = D+B_HEIGHT * i;
			if (map[i][j] != 0) {
				//不可修改的蓝色
				rect.push_back(make_pair<bool, Button*>(false, new Button(x, y, B_WIDTH, B_HEIGHT, RGB(140, 240, 230), RGB(135, 206, 235),to_string(map[i][j]))));
			}
			else {
				//可修改的
				rect.push_back(make_pair<bool, Button*>(false, new Button(x, y, B_WIDTH, B_HEIGHT, RGB(140, 240, 230),RED, to_string(map[i][j]))));
			}
		}
	}
}
void Shuduku::DrawMap()
{
	for (auto v : rect) {
		v.second->Show();
	}
}
