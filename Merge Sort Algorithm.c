#include<stdio.h>
void merge(int a[],int l,int m,int n)
{
	int i,j,k;
	int n1 = m - l + 1;
    int n2 = n - m;
	int L[n1],R[n2];
	
	for (i = 0; i < n1; i++)
  L[i] = a[l + i];
    for (j = 0; j < n2; j++)
  R[j] = a[m + 1 + j];
        
	i=0;
	j=0;
	k=l;
	
    while (i < n1 && j < n2)
 {
    if (L[i] <= R[j]) {
    a[k] = L[i];
    i++;
 }
  else {
    a[k] = R[j];
    j++;
}
    k++;
}
  
    while (i < n1) {
	a[k] = L[i];
	i++;
    k++;
    }
  
    while (j < n2) {
    a[k] = R[j];
    j++;
    k++;
    }
}

void printarr(int a[], int n)
{
int i;
for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}



void mergesort(int a[], int l, int n)
{
	if(l<n)
	{
		int m=l+(n-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,n);
		merge(a,l,m,n);
	}
}

int main()
{
	int a[100];
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int i;
	printf("Enter the array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array=");
	printarr(a,n);
	printf("\n");

	mergesort(a,0,n-1);
	
	printf("Sorted array is:\n");
	printarr(a,n);
}
