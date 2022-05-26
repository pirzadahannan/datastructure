#include<stdio.h>
#include<stdlib.h>
void qs(int a[],int l,int r);
int ps(int a[],int l, int r);
swap(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,i;
	int *a;
	printf("Enter the size of array:");
	scanf("%d", &n);
	a=malloc(sizeof(int)*n);
	printf("\nEnter the elements of array:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	qs(a,0,n-1);
	printf("Descending order sorted array:");
	for(i=0;i<n;i++){
	printf("%d",a[i]);
	printf(" ");
	}
	return 0;
}

void qs(int a[],int l,int r)
{
	int q;
	if(l<r)
	{
		q=ps(a,l,r);
		qs(a,l,q-1);
		qs(a,q+1,r);
	}
}

int ps(int a[],int p,int r)
{
	int x=a[r];
	int i=p-1;
	int j,temp;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]>x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
	
}
