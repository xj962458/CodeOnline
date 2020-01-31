#include<stdio.h>
struct student 
{
    char  name[20];
    char num[20];
    int age;
    float score;
}stud[10];
struct student* stu=stud;
void main()
{
    int i,j;
    printf("请输入学生信息：\n");
    for(i=0;i<10;i++)
        scanf("%s\n",(stu+i)->name);
    for(j=0;j<10;j++)
        printf("%s ",(stu+j)->name);
} 