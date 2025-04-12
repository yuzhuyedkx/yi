#include<stdio.h>
#include<string.h>  //strcmp的头文件 
//输入密码并验证是否正确。
int main(){
	int i=0;
	char password[20]={0};
	//密码 abb2332 
	for(i=1;i<=3;i++){
		printf("请输入密码（只有三次验证机会）：");
		scanf("%s",password);
		//strcmp 是库函数，比较两个字符串是否相等，若相等则返回 0。 
		if(strcmp(password,"abb2332")==0){
			printf("密码正确！登陆成功！\n"); 
			break; 
		}
		else printf("密码错误！\n"); 
		
	}
	if(i==3&&strcmp(password,"abb2332")!=0) printf("三次密码均错误！\n"); 
	return 0;
} 
