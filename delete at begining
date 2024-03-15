#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;                    
    struct node *nextptr;      
}*stnode;                  

void createNodeList(int n);  
void FirstNodeDeletion();	   
void displayList();             

int main()
{
    int n, data, pos;
    printf("\n Delete first node of Singly Linked List :\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\n Data entered in the list are : \n");		
    displayList();

    FirstNodeDeletion();
    printf("\n Data, after deletion of first node : \n");		
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)  
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> data = num;      
        stnode-> nextptr = NULL; 
        tmp = stnode;
        for(i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode == NULL)  
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->data= num;      
                fnNode->nextptr = NULL; 
                tmp->nextptr = fnNode;  
                tmp = tmp->nextptr;
            }
        }
    }
}

void FirstNodeDeletion()
{
    struct node *toDelptr;

    if(stnode == NULL)
    {
        printf(" There are no nodes in the list.");
    }
    else
    {
        toDelptr = stnode;
        stnode = stnode->nextptr;
        printf("\n Data of node 1 which is being deleted is :  %d\n", toDelptr->data);
        free(toDelptr);  
    }
}

void displayList()
{
    struct node *tmp;

    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->data);   
            tmp = tmp->nextptr;                 
        }
    }
}
