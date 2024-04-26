#include <stdio.h>
#include <stdlib.h>
#define n 5
int main()
{
	int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
	printf("Queue using Array");
	printf("/n 1.Insertion\n2.Deletion \n 3.Display \n 4.Exit");
	while(ch)
	{
		printf("\n Enter the Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			if(rear==x)
			printf("\n Queue is full");
			else
			{
				printf("\n Enter no %d:",j++);
				scanf("%d",&queue[rear++]);
				
			}
			break;
			case 2:
			if(front==rear
			{
				printf("\n Queue is Empty");
			}
			else
			{
				printf("\n Deleted Element is %d",queue[front++]);
				x++;
				
			}
			break;
			case 3:
			printf("\n Queue Elements are:\n");
			if(front==rear)
			printf("\n Queue is Empty");
			else
			{
				for(i=front;i<rear;i++)
				{
					printf("%d",queue[i]);
					printf("\n");
					
				}
			break;
			case 4:
			exit(0);
			default:
			printf("Wrong Choice:please see the options");
			}
		}
	}
		return 0;
}

		
