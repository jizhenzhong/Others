#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h> 
#include<conio.h> 
#define U 1 
#define D 2 
#define L 3 
#define R 4 
void createmap();
void snakebody();
void snakefood();
void snakemove();

typedef struct SNAKE
{
	int x;
	int y;
	struct SNAKE* next;
}snake;
 snake* head;
 snake* food;
 int n=4;
 int status,k;


void Pos(int x,int y)//设置光标位置函数 ,要学习的。 
{
    COORD pos;
	HANDLE hOutput;
    pos.X=x;
    pos.Y=y;
    hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput,pos);
}


 void createmap()//长40个格子，宽 20个格子（y=80，x=20） 
 {
 	int i;
 	for(i=0;i<80;i=i+2)
 	{
 		Pos(i,0);
		printf("■") ;
		Pos(i,19);
		printf("■") ;
    }
	for(i=0;i<20;i=i+1)
	{
		Pos(0,i);
		printf("■");
		Pos(78,i);
		printf("■");
	} 
 }
 
 
 void snakebody()
 {  
    int j;
    snake* newopen;
    newopen=(snake*)malloc(sizeof(snake));
    newopen->x=18;
    newopen->y=7;
    Pos(newopen->x,newopen->y);
    printf("■");
    head=newopen;
 	for(j=1;j<4;j++)
	{
	snake* tail;
	tail=(snake*)malloc(sizeof(snake));
	newopen->next=tail;
 	tail->x=newopen->x-2;
 	tail->y=newopen->y;
 	Pos(tail->x,tail->y);
 	printf("■");
 	newopen=tail; 
    }//tail此时无指向 ,tail的生命周期只在for语句内。
    newopen->next=NULL; 
 }
 
 
 void snakefood()
{   
	srand((unsigned)time(NULL));
    food=(snake*)malloc(sizeof(snake));
	food->y=rand()%18+1; 
	food->x=rand()%77+2;
	if(food->x%2!=0)
	{
		food->x=food->x+1;	
	}
	Pos(food->x,food->y);
	printf("■"); 		
}
  

void unionh()
{
	int j,i;
    snake* H;
	H=(snake*)malloc(sizeof(snake));
	if(status==U) 
	{
	H->x=head->x;
    H->y=head->y-1;
	H->next=head;
	}
	else if(status==D)
	{
	H->x=head->x;
	H->y=head->y+1;
	H->next=head;
	}
	else if(status==L)
	{
	H->x=head->x-2;
	H->y=head->y;
	H->next=head;
	}
	else if(status==R)
	{
	H->x=head->x+2;
	H->y=head->y;
	H->next=head;
	}
	for(i=0;i<80;i=i+2)
    {
		if((H->x==i&&H->y==0)||(H->x==i&&H->y==19))
		exit(0);
	}
	for(i=0;i<20;i=i+1)
	{
		if((H->x==0&&H->y==i)||(H->x==78&&H->y==i))
		exit(0);
	}	
	for(i=0;i<n;i++)
	{
		if(H->x==head->x&&H->y==head->y)
		exit(0);
		head=head->next;//未知 
	}
	head=H;
	{
	if(H->x!=food->x&&H->y!=food->y)
	{
	for(j=0;j<n+1;j++)
	{
		if(H->next)
		{
		Pos(H->x,H->y);
		printf("■");
		H=H->next;
	    }
	    else
	    {
	   	Pos(H->x,H->y);
		printf(" ");
		free(H);
		}
	}
	H=head;
	for(j=0;j<n-1;j++)
	{
		H=H->next;
	}
    }
    else
    {   
	Pos(H->x,H->y);
    printf("■");
    for(j=0;j<n;j++)
    {
    H=H->next;
    Pos(H->x,H->y);
    printf("■");
    }
    n=n+1;
    free(food); 
    snakefood();
    }
    H->next=NULL; 
    } 
}


void snakemove()
{
	if(status==U)
	{unionh();Sleep(k);}
	else if(status==D)
	{unionh();Sleep(k);}
	else if(status==L)
	{unionh();Sleep(k);}
	else if(status==R)
	{unionh();Sleep(k);}
 }
 
  
void select()
{   	
	while(1)
	{
	if(GetAsyncKeyState(VK_UP))
	status=U;
	else if(GetAsyncKeyState(VK_DOWN))
	status=D;
	else if(GetAsyncKeyState(VK_LEFT))
	status=L;
	else if(GetAsyncKeyState(VK_RIGHT))
	status=R;
	snakemove();
    }
} 


int main()
{   
    char F;
    Pos(24,27);
    printf("a.简单  b.一般  c.困难     ");
    F=getchar();
    if(F=='c')
    k=200;
	else if(F=='b')
	k=500;
	else if(F=='a')
	k=1000;
    Pos(20,22);
	printf("欢迎试玩本呆呆的贪吃蛇!");
	createmap();
	snakebody();
	snakefood();
	select();
	return 0;
} 

