#include<stdio.h>
#include<string.h>  //strcmp��ͷ�ļ� 
//�������벢��֤�Ƿ���ȷ��
int main(){
	int i=0;
	char password[20]={0};
	//���� abb2332 
	for(i=1;i<=3;i++){
		printf("���������루ֻ��������֤���ᣩ��");
		scanf("%s",password);
		//strcmp �ǿ⺯�����Ƚ������ַ����Ƿ���ȣ�������򷵻� 0�� 
		if(strcmp(password,"abb2332")==0){
			printf("������ȷ����½�ɹ���\n"); 
			break; 
		}
		else printf("�������\n"); 
		
	}
	if(i==3&&strcmp(password,"abb2332")!=0) printf("�������������\n"); 
	return 0;
} 
