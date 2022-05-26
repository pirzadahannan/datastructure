#include<stdio.h>

//CSE-19-40
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,k,n, m,p,q;
	printf("Enter the dimensions of the 1st matrices {first rows then columns}:");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("Enter the dimensions of the 2nd matrices {first rows then columns}:");
	scanf("%d", &p);
	scanf("%d", &q);
	
	if(m!=p)
	{
		printf("matrix multiplication not possible");
	}
	else
	printf("Enter the 1st matrices row wise:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Enter the 2nd matrices row wise:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
			sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}	
	}
	
	printf("Product of matrices row wise:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
