#include <stdio.h>
#include <stdlib.h>
//用三角形三边求三角形面积。 
int main(int argc, char *argv[]) {
	float a,b,c,s,area;
	printf("请任意输入三个数字，作为三角形三边。\n");
	scanf("%f%f%f",&a,&b,&c);
	if((c+b)>a&&(a+c)>b&&(a+b)>c&&(a-b)<c&&(a-c)<b&&(b-c)<a){
		printf("满足三角形条件\n");
		s=(a+b+c)/2;
	    area=sqrt(s*(s-a)*(s-b)*(s-c));
	    printf("三角形面积：%.2f",area);
	}
	else
	   printf("不满足三角形条件");
	return 0;
}
