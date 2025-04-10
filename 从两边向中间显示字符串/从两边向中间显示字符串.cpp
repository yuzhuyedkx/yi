#include <stdio.h>
#include <string.h> //strlen的头文件 
#include <windows.h> //Sleep的头文件 
#include <stdlib.h>  //system("cls")的头文件 
//将一串字符从两边向中间逐一显示 
int main(){
	char arr1[]="safa32refse345wwrd";
	char arr2[]="                  ";
	int left=0;
	int right=strlen(arr2)-1;
	while(left<=right){
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);  //暂停一秒 
		system("cls"); //清除屏幕 
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
