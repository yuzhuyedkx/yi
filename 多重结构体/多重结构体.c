#include <stdio.h>
struct Student{
    char name[20];
    char sex[10];
    int ID;
    int grade;
};
struct Height{
    struct Student stu;
    int h;
};
int main(){
    struct Student stu1={"limi","nv",1,98};  //结构体变量创建和初始化
    struct Height hei1={{"hiji","nv",2,97},168};  //结构体变量创建和初始化
    printf("%s %s %d %d\n",stu1.name,stu1.sex,stu1.ID,stu1.grade);
    printf("%s %s %d %d %d\n",hei1.stu.name,hei1.stu.sex,hei1.stu.ID,hei1.stu.grade,hei1.h);
   while(1){
    getchar;
   }
    
    return 0;
}