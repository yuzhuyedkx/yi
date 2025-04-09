#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//某年的几月有多少天 
int main(int argc, char *argv[]) {
	int year,m,days;
	printf("请任意输入年、月: ");
	scanf("%d%d",&year,&m);
   	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	    days=31;
	else{
	    if(m==4||m==6||m==9||m==11)
		   days=30; 
	    if(m==2)
	        if(year%4==0&&year%100!=0||year%400==0) 
	            days=29;
               else
	            days=28;
	}
	    
	    
	printf("%d",days);
	return 0;
}
	  
	  
	  
	  
	
        
	    
	    
	    
	    

	
	    
	    
	    
	    
