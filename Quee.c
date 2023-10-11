#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void display();
int queue[100];
int Rear= -1;
int front =-1;
int n;
void main()
{
	int O;
	printf("Enter queue size: ");
	scanf("%d",&n);
	while (1)
	{
	printf("\n\nQueue Operations\n");
	printf("1.Enqueue Operation\n");
	printf("2.Dequeue Operation\n");
	printf("3.Display the Queue \n");
	printf("4.Exit\n");
	printf("\n Enter your choice of operations: ");
	scanf("%d",&O);
	switch (O)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit (0);
		default:
			printf("incorrect choice\n");
	}
	}

}
void enqueue()
{
	int item;
	if (Rear==n-1)
	printf("Overflow\n");
	else
	{
	if (front == -1){
		front=0;}
	printf("Element to be inserted the Queue:");
	scanf("%d",&item);
	Rear=Rear+1;
	queue[Rear]=item;
	}
}
void dequeue()
{
	if(front==-1 || front > Rear)
	{
	printf("Underflow\n");
	}
	else
	{
	printf("Element deleted from the Queue \n %d",queue[front]);
	front=front+1;
	}
}
void display()
{
	if(front == -1)
		printf("Empty Queue\n");
	else
		{
		printf("Queue: ");
		for(int i= front; i <= Rear; i++)
			printf("%d ",queue[i]);
		printf("\n");
		}

}
		
			
			
			
			
	
	
	
