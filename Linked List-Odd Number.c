#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int i,j;
		printf("Enter the number of Nodes : ");
		scanf("%d",&j);
		printf("\n");
		struct Node *temp,*tail;
		for(i=0;i<j;i++)
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d :",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				if(head==NULL)
					{
						head=temp;
						tail=temp;
					}
				else
					{
						tail->next=temp;
						tail=temp;
					}
					
			}
			temp->next=NULL;
			
	}
	
void view(struct Node *p)	
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

void OddNumber(struct Node *p)
	{
		printf("\n The Odd numbers in the given list are :\n");
		while(p!=NULL)
			{
				if(p->data%2!=0)
					{
						printf("%d ",p->data);
					}
					p=p->next;
			}
	}

int main()
	{
		create();
		view(head);
	OddNumber(head);
	}
