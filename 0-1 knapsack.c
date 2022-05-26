#include<stdio.h>
#include<stdlib.h>
int max(int a, int b)
{
	if (a>b)
	{
	return a;}
	else 
	return b;
}
int ks(int *w,int *v,int mv,int n)
{
	int i,j;
	int k[n+1][mv+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=mv;j++)
		{
				if(i==0 || j==0)
				k[i][j]=0;
			else if (w[i-1] <= j)
				k[i][j] = max(v[i-1] + k[i-1][j-w[i-1]], k[i-1][j]);
			else
				k[i][j]=k[i-1][j];
		}
	}
	return k[n][mv];	
}
int main()
{
	int n;
	int *w, *v;
	int mv;
	int i;
	printf("Enter the number of products:");
	scanf("%d",&n);
	w=(int*)malloc(sizeof(int)*n);
	v=(int*)malloc(sizeof(int)*n);
	printf("Enter the weights of the product(in kg):");
	for(i=0;i<n;i++)
	{
		printf("\nP%d weight=",i+1);
		scanf("%d",&w[i]);
	}
	printf("Enter the value of the product:");
	for(i=0;i<n;i++)
	{
		printf("\nP%d value=",i+1);
		scanf("%d",&v[i]);
	}
	printf("Enter the max weight you can take:");
	scanf("%d",&mv);
	printf("Max Profit=%d",ks(w,v,mv,n));
}
