#include<stdio.h>
int front=-1,rear=-1,ar[10];

void enque(int n)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		ar[rear]=n;
	}
	else if(front==(rear+1)%10)
	{
		printf("queue is full");
	}
	else
	{
		rear=(rear+1)%10;
		ar[rear]=n;
	}
}
void dqueue()
{
	int d;
	if(front==-1&&rear==-1)
	{
		printf("queue is empty");
	}
	else
	{	
		d=ar[front];
		printf("%d",d);		
		front=(front+1)%10;
		if(front==(rear+1))
		front=rear=-1;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("queue is empty\n");
		return;
	}
	
	for(i=front; i!=rear;i=(i+1)%10)
	printf("%d",ar[i]);
	printf("%d",ar[i]);
}
int main()
{
	int ch=0,n;
	while(ch!=-1)
	{
	printf("enter your choice \n 1.enqueue\t2.dqueue\t3.display \t stop(-1)")	;
	scanf("%d",&ch);
	switch(ch)
	{
	
	case 1:
		{
			printf("enter a no");
			scanf("%d",&n);
			enque(n);
			break;
		}
	case -1:
		{
			break;
		}
	case 2:
	{
		dqueue();
		break;
	}
	case 3:
	{
		display();
		break;
	}
	}}
return 0;
}
