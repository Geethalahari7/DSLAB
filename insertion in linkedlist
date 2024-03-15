#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
int i,n,temp;
struct node *p,*q,*head;
printf("enter number of nodes");
scanf("%d",&n);
printf("enter the value of head node");
scanf("%d",&temp);
q=(struct node*)malloc(sizeof (struct node));
q->data=temp;
q->next=NULL;
head=q;
p=head;
for(i=1;i<n;i++)
{
printf("enter the value of next node");
scanf("%d",&temp);
q=(struct node*)malloc(sizeof(struct node));
q->data=temp;
q->next=NULL;
p->next=q;
p=p->next;
}
printf("\n");
p=head;
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
return 0;
}
