#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void count();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int char;
	while(1)
	{
		printf("Enter your choice");
		printf("\n Press  1 to create the linked list \n 2 to display \n 3 to check the frequency of a given number in a linked list");
		printf("\n Please enter choice \n ");
		scanf("%i",&char);
		switch(char)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:count();
			break;
			default :printf(" Wrong choice \n!");
			return 0;
		}
	}
}

void create()
{
	int i,j;
	printf("Please enter the no of nodes you want to create \n ");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
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
 } 
 
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
  
  void count()
  {
  	int element,count=0;
  	struct node *ptr=head;
  	printf("Enter the number whose frequency you want to know:\n");
  	scanf("%d",&element);
  	while(ptr!=NULL)
    {
      	if(ptr->data==element)
      	{
      		count++;
	    }
	    ptr=ptr->next;
	 }
     printf("The frequency of the given number is: %d \n",count);
		  printf("\n");
  }
