#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxsub 3
#define maxnum 10
struct student
{
    int num;
	char name[10];
	float score[maxsub];
	float sum;
	float average;
 } stu[maxnum];
int menu();
void input();
void add(); 
void modify();
void remove();
void query();
 
 
int main()
{
    struct student stu[maxnum];
    while(1)//返回菜单的循环//
    switch(menu()) 
    {
    	case 1:input(); 
    	       break;
        case 2:add();
		       break;    
        case 3:modify();
		       break;
		case 4:remove();
		       break;
		case 5:query();
		       break;
		case 0:printf("感谢使用！");
		       exit(0);
	    default :printf("\n输入错误...!!!  \n\n");
	}     		
}


int menu()
{
	int c;
	printf("******欢迎进入学生管理系统（学号为10位数字）******\n");
	printf("*                     选择菜单                   *\n");
	printf("*                 1---输入学生信息               *\n");
	printf("*                 2---增添学生信息               *\n");
	printf("*                 3---修改学生信息               *\n");
	printf("*                 4---删除学生信息               *\n");
	printf("*                 5---查询学生信息               *\n");
	printf("*                 0---退出系统                   *\n");
	printf("**************************************************\n");
	printf("请输入0~5中的数字选项: ");
	scanf("%d",&c);
	return c; 
}


void input()
{    
	int i=0;
	int j=0;
	char c;
	printf("------------------输入学生信息--------------------\n");
	for(i=0;i<maxnum;i++)
   {	
     printf("可以再增添%d位同学信息:\n",maxnum-i); 
	 printf("请输入第%d位同学的学号:",i+1);
	 scanf("%d",&stu[i].num);
     printf("请输入第%d位同学的姓名:",i+1);
	 scanf("%s",&stu[i].name);
	 printf("输入%d门课的成绩:\n",maxsub);
	 for(j=0;j<maxsub;j++)
	{
	  printf("score%d：",j+1);
	  scanf("%f",&stu[i].score[j]);
	  stu[i].sum+=stu[i].score[j];
	}
	 stu[i].average=(stu[i].sum/maxsub);    			    
     printf("是否继续输入其他(她)学生信息?    Y or N\n");
     scanf("%s",&c);
     if((c=='Y')||(c=='y'))
         ;
     else
     break;
   }
}


void add()
{
	int i;
	int j;
	for(i=0;i<maxnum;i++)
	if((stu[i].num==0)&&(i<maxnum))
	{
	printf("请输入要添加的学生信息！\n"); 
	printf("请输入学生学号：");
	scanf("%d",&stu[i].num);
	printf("请输入学生姓名：");
	scanf("%s",&stu[i].name);
	printf("输入%d门课的成绩:\n",maxsub);
	for(j=0;j<maxsub;j++)
	{
	printf("score%d：",j+1);
	scanf("%d",&stu[i].score[j]);
	stu[i].sum+=stu[i].score[j];
	}
	printf("添加学生信息成功！\\n");
	break;
	}
	else
	{
	if((stu[i].num!=0)&&(i==maxnum))
	printf("学生信息已满，添加信息失败！\n");
    }
} 


void modify()
{   
  printf("------------------修改学生信息--------------------\n");
  int i,j;
	int a;
	char c;
	printf("请输入要修改的学生学号：");
	scanf("%d",&a);
	for(i=0;i<maxnum;i++) 
	{
		if(stu[i].num==a)
		break;
	}
	if(i==maxnum)
	{
	 printf("没有找到此学生信息！\n");
	 return;	 
	}
	do 
  {
	printf("输入改正后的学生信息：\n");
	printf("请输入学生学号：");
	scanf("%d",&stu[i].num);
	printf("请输入学生姓名：");
	scanf("%s",&stu[i].name);
	printf("输入%d门课的成绩:\n",maxsub);
    for(j=0;j<maxsub;j++)
	{
	printf("score%d：",j+1);
	scanf("%d",&stu[i].score[j]);
	stu[i].sum+=stu[i].score[j];
	}
	stu[i].average=stu[i].sum/maxsub; 
	printf("是否继续修改此同学信息？ Y or N\n");
	scanf("%s",&c);
	if((c=='Y')||(c=='y'))
	   ;
	else
    return;
  }while((c=='Y')||(c=='y'));		 	 
}


void remove()
{   int a;
    int i;
    int j;
    char c;
	printf("------------------删除学生信息--------------------\n");
	printf("请输入要删除的学生学号：\n");
	scanf("%d",&a);
	for(i=0;i<maxnum;i++)
	{	
	if(stu[i].num==a)
	{	
	printf("是否删除此学生信息？\n");
	printf("|   学号        |姓名        |成绩1  |成绩2  |成绩3  |总分   |平均分  |\n");
	printf("|%-12d   |%-5s       |%-5.2f  |%-5.2f  |%-5.2f  |%-5.2f |%-5.2f   |\n",stu[i].num,stu[i].name,
	stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum,stu[i].average);
	printf("   Y  or  N ?");
	scanf("%s",&c);
	if((c=='Y')||(c=='y'))
	{
		for(j=i;j<maxnum;j++)
		stu[j]=stu[j+1];
		if(stu[j+1].num==0)
		{	
		printf("删除成功.....\n");
		return;
	    }

	} 
		else
		{
			printf("未删除此学生信息.....\n");
			return; 
		} 	 
    }
    }
    if(i==maxnum);
    printf("不存在要删除的学生信息！\n"); 	
}


void query()
{
	int i;
	int j;
	printf("**********************学生信息表***********************\n");
	printf("|   学号        |姓名        |成绩1  |成绩2  |成绩3  |总分    |平均分   |\n");
	for(i=0;i<maxnum;i++)
	{
	if(stu[i].num==0)
	break;	
	printf("|%-12d   |%-5s       |%-5.2f  |%-5.2f  |%-5.2f  |%-7.2f |%-5.2f    |\n",stu[i].num,stu[i].name,
	stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum,stu[i].average);
    }	 	
}




