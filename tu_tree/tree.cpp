#include"common.h"
#include"tuxing.h"
int main() {
	initgraph(500, 500);
	setbkcolor(WHITE);
	cleardevice();
	Tree(200, 100);
	while (1);
	closegraph();
	return 0;
}
