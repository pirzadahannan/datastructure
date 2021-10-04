#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void insert_beginning();
void insert_ending();
void insert_middle();
void delete();
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
		printf("\n Enter your choice");
		printf("\n 1 to  create \n 2 to view \n 3 to insert at the beginning \n 4 to insert at the end \n 5 to insert at any position \n 6 to delete a node \n");
		printf("\n Please enter the choice :");
		scanf("%i",&char);
		switch(char)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insert_beginning();
			break;
			case 4:insert_ending();
			break;
			case 5:insert_middle();
			break;
			case 6:delete();
			break;
			default :printf("\n You have entered the wrong choice!");
			return 0;
		}
	}
}

void create()
{
	int i,j;
	printf("Please enter the no of nodes you want to create ");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data\n ");
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
			temp->next=head;
			tail=temp;
		}
	}
 } 
 
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr->next!=head)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("%d\n\n",ptr->data);
 }
 
  void insert_beginning()
 {
 	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter info of node");
	scanf("%d",&ptr->data);
	ptr->next=head;
	head=ptr;
	tail->next=head;
 }
  
 void insert_ending()
 {
 	struct node *ptr,*cpt;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the info of node");
	scanf("%d",&ptr->data);
	cpt=head;
	while(cpt->next!=head)
      {
     	cpt=cpt->next;
       }
	cpt->next=ptr;
	ptr->next=head;
  } 
 
 void insert_middle()
 {

 	int target;
 	struct node *ptr,*cpt;
 	ptr=(struct node *)malloc(sizeof(struct node));
 	printf("enter the element to be inserted\n");
	scanf("%d",&ptr->data);
	printf("enter the node after which you want to insert the data\n");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	cpt->next=ptr;
 }
 
 void delete()
  {
  	struct node *ptr,*cpt;
  	int item;
  	printf("enter the node to be deleted\n");
  	scanf("%d",&item);
  	if(head->data==item)                         
  	{
  		ptr=head;
  		head=head->next;
  		tail->next=head;
  		free(ptr);
    }
    	 else 
	  {
	  	ptr=head;      
	  	while(ptr->data!= item)
		  {
		  	cpt=ptr;
		  	ptr=ptr->next;
		  }
		  cpt->next=ptr->next;
		  if(ptr==tail)         
		  {
		  	tail=cpt;
	        tail->next=head;
		  }
		  free(ptr);
	  }
	}
