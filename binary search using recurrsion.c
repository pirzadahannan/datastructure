#include<stdio.h>
int binsearch(int arr[],int l, int h,int s);
void bubblesort(int list[], int size);
int main()
{
	int arr[100];
	int i,n,s;
	printf("Enter the number of elements in an array:");
	scanf("%d",&n);
	
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
    bubblesort(arr, n);
    printf("\nSorted array elements is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
    printf("\nEnter the element you want to search:");
	scanf("%d",&s);
	
	int pos = binsearch(arr, 0, n,s);
	if(pos==-1)
	{
		printf("Element not found");
	}
	else
	printf("Element is on %d position",pos);
}

void bubblesort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int binsearch(int arr[],int l, int n,int s)
{
	if(n>=l)
	{
	int mid=l+(n-l)/2;
	if(arr[mid]==s)
	{
	return mid+1;
	}
	else if(arr[mid]>s)
	{
	binsearch(arr,l,mid-1,s);
	}
	else if(arr[mid]<s)
	{
	binsearch(arr,mid+1,n,s);
    }
    }
    else
	return -1;
}
