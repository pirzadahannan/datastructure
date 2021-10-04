#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void maximum();
void minimum();
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
		printf("\n Press 1 to create the linked list \n 2 to display the given list  \n 3 for the maximum element in  linked list \n 4 for the minimum element in the linked list");
		printf("\n Please enter the choice ");
		scanf("%i",&char);
		switch(char)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:maximum();
			break;
			case 4:minimum();
			break;
			default :printf("You have entered the wrong choice!");
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
		printf("enter your data ");
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
 
 void maximum()
 {
 	int max=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(max<ptr->data)
 		{
 			max=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n The maximum element in the linked list is:%d\n",max);
 }
 
 void minimum()
 {
 	int min=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(min>ptr->data)
 		{
 			min=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf(" The minimum element in the linked list is:%d",min);
 printf("\n");
 }
