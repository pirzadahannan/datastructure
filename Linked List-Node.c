#include<stdio.h>

struct node   
{  
    int data;  
    struct node *next;   
};

struct node no1, no2, no3, no4, no5;

int main()
{
	no1.data = 5;
	no2.data = 10;
	no3.data = 15;
	no4.data = 20;
	no5.data = 25;
	no1.next = &no2;
	no2.next = &no3;
	no3.next = &no4;
	no4.next = &no5;
	no5.next = NULL;
	printf("From the element before: \n");
	printf("%d\n", no1.data);
	printf("%d\n", no1.next -> data);
	printf("%d\n", no2.next-> data);
	printf("%d\n", no3.next -> data);
	printf("%d\n", no4.next-> data);
	printf("From the first element: \n");
	printf("%d\n", no1.data);
	printf("%d\n", no1.next -> data);
	printf("%d\n", no1.next-> next -> data);
	printf("%d\n", no1.next -> next -> next -> data);
	printf("%d\n", no1.next-> next -> next -> next -> data);

}
