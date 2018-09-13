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
    while(1)//���ز˵���ѭ��//
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
		case 0:printf("��лʹ�ã�");
		       exit(0);
	    default :printf("\n�������...!!!  \n\n");
	}     		
}


int menu()
{
	int c;
	printf("******��ӭ����ѧ������ϵͳ��ѧ��Ϊ10λ���֣�******\n");
	printf("*                     ѡ��˵�                   *\n");
	printf("*                 1---����ѧ����Ϣ               *\n");
	printf("*                 2---����ѧ����Ϣ               *\n");
	printf("*                 3---�޸�ѧ����Ϣ               *\n");
	printf("*                 4---ɾ��ѧ����Ϣ               *\n");
	printf("*                 5---��ѯѧ����Ϣ               *\n");
	printf("*                 0---�˳�ϵͳ                   *\n");
	printf("**************************************************\n");
	printf("������0~5�е�����ѡ��: ");
	scanf("%d",&c);
	return c; 
}


void input()
{    
	int i=0;
	int j=0;
	char c;
	printf("------------------����ѧ����Ϣ--------------------\n");
	for(i=0;i<maxnum;i++)
   {	
     printf("����������%dλͬѧ��Ϣ:\n",maxnum-i); 
	 printf("�������%dλͬѧ��ѧ��:",i+1);
	 scanf("%d",&stu[i].num);
     printf("�������%dλͬѧ������:",i+1);
	 scanf("%s",&stu[i].name);
	 printf("����%d�ſεĳɼ�:\n",maxsub);
	 for(j=0;j<maxsub;j++)
	{
	  printf("score%d��",j+1);
	  scanf("%f",&stu[i].score[j]);
	  stu[i].sum+=stu[i].score[j];
	}
	 stu[i].average=(stu[i].sum/maxsub);    			    
     printf("�Ƿ������������(��)ѧ����Ϣ?    Y or N\n");
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
	printf("������Ҫ��ӵ�ѧ����Ϣ��\n"); 
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&stu[i].num);
	printf("������ѧ��������");
	scanf("%s",&stu[i].name);
	printf("����%d�ſεĳɼ�:\n",maxsub);
	for(j=0;j<maxsub;j++)
	{
	printf("score%d��",j+1);
	scanf("%d",&stu[i].score[j]);
	stu[i].sum+=stu[i].score[j];
	}
	printf("���ѧ����Ϣ�ɹ���\\n");
	break;
	}
	else
	{
	if((stu[i].num!=0)&&(i==maxnum))
	printf("ѧ����Ϣ�����������Ϣʧ�ܣ�\n");
    }
} 


void modify()
{   
  printf("------------------�޸�ѧ����Ϣ--------------------\n");
  int i,j;
	int a;
	char c;
	printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
	scanf("%d",&a);
	for(i=0;i<maxnum;i++) 
	{
		if(stu[i].num==a)
		break;
	}
	if(i==maxnum)
	{
	 printf("û���ҵ���ѧ����Ϣ��\n");
	 return;	 
	}
	do 
  {
	printf("����������ѧ����Ϣ��\n");
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&stu[i].num);
	printf("������ѧ��������");
	scanf("%s",&stu[i].name);
	printf("����%d�ſεĳɼ�:\n",maxsub);
    for(j=0;j<maxsub;j++)
	{
	printf("score%d��",j+1);
	scanf("%d",&stu[i].score[j]);
	stu[i].sum+=stu[i].score[j];
	}
	stu[i].average=stu[i].sum/maxsub; 
	printf("�Ƿ�����޸Ĵ�ͬѧ��Ϣ�� Y or N\n");
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
	printf("------------------ɾ��ѧ����Ϣ--------------------\n");
	printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
	scanf("%d",&a);
	for(i=0;i<maxnum;i++)
	{	
	if(stu[i].num==a)
	{	
	printf("�Ƿ�ɾ����ѧ����Ϣ��\n");
	printf("|   ѧ��        |����        |�ɼ�1  |�ɼ�2  |�ɼ�3  |�ܷ�   |ƽ����  |\n");
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
		printf("ɾ���ɹ�.....\n");
		return;
	    }

	} 
		else
		{
			printf("δɾ����ѧ����Ϣ.....\n");
			return; 
		} 	 
    }
    }
    if(i==maxnum);
    printf("������Ҫɾ����ѧ����Ϣ��\n"); 	
}


void query()
{
	int i;
	int j;
	printf("**********************ѧ����Ϣ��***********************\n");
	printf("|   ѧ��        |����        |�ɼ�1  |�ɼ�2  |�ɼ�3  |�ܷ�    |ƽ����   |\n");
	for(i=0;i<maxnum;i++)
	{
	if(stu[i].num==0)
	break;	
	printf("|%-12d   |%-5s       |%-5.2f  |%-5.2f  |%-5.2f  |%-7.2f |%-5.2f    |\n",stu[i].num,stu[i].name,
	stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum,stu[i].average);
    }	 	
}




