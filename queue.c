//queue implementation using c.....
#include<stdio.h>
int queue[5], front = -1, rear = -1;
void enqueue();
void dequeue();
void show();
void exit();
void main()
{
	int ch;
	printf("1.ENQUEUE \n");
	printf("2.DEQUEUE \n");
	printf("3.SHOW \n");
	printf("4.EXIT \n");
	while(1)
	{
		printf("enter your choice:\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: show();
			break;
			case 4: exit(0);
			break;
			default: printf("enter the right choice");
		}
	}
}
void enqueue()
{
	int data;
	if(rear == 5-1)
	{
		printf("queue is overflow!!!");
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		printf("enter the element");
		scanf("%d",&data);
		rear++;
		queue[rear] = data;
	}
}
void dequeue()
{
	int i;
	if(front == rear)
	{
		printf("queue is overflow!!!");
	}
	else
	{
		printf("deleted number is %d",queue[front]);
		front++;
	}
}
void show()
{
	int i;
	if(rear == -1)
	{
		printf("queue is empty!!!");
	}
	else
	{
		printf("queue elements are :\n");
		for(i = front; i <= rear; i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
