#include <stdio.h>
#include <string.h> //strlen��ͷ�ļ� 
#include <windows.h> //Sleep��ͷ�ļ� 
#include <stdlib.h>  //system("cls")��ͷ�ļ� 
//��һ���ַ����������м���һ��ʾ 
int main(){
	char arr1[]="safa32refse345wwrd";
	char arr2[]="                  ";
	int left=0;
	int right=strlen(arr2)-1;
	while(left<=right){
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);  //��ͣһ�� 
		system("cls"); //�����Ļ 
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
