#include<stdio.h>
#include<stdlib.h>
void ks(float *w,float *v,float mv,int n)
{
	int i,j;
	float p,pp;
	float *a;
	a=(float*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		a[i]=v[i]/w[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				float temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
				temp=w[i];
				w[i]=w[j];
				w[j]=temp;
				
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;
			}
		}
	}
	float tw=mv;
	float cp;
	for(i=0;i<n;i++)
	{
	if(w[i]<tw && tw!=0)
	{
		p=p+v[i];
		tw=tw-w[i];
		cp=v[i];
		printf("\nProduct of weight %fkg is selected compeletely",w[i]);
		printf("\nTotal Profit selected=%f",cp);
	}
	else if(w[i]>tw && tw!=0)
	{
		pp=(tw/w[i])*100;
		p=p+((pp/100)*v[i]);
		cp=((pp/100)*v[i]);
		printf("\n%fpercent of product of weight %fkg is selected",pp,w[i]);
		printf("\nTotal Profit selected=%f",cp);
		break;
	}
	}
	printf("\nTotal Profit with full capacity of bag=%f",p);
}
int main()
{
	int n;
	float *w, *v;
	float mv;
	int i;
	printf("Enter the number of products:");
	scanf("%d",&n);
	w=(float*)malloc(sizeof(float)*n);
	v=(float*)malloc(sizeof(float)*n);
	printf("Enter the weights of the product(in kg):");
	for(i=0;i<n;i++)
	{
		printf("\nP%d weight=",i+1);
		scanf("%f",&w[i]);
	}
	printf("Enter the value of the product:");
	for(i=0;i<n;i++)
	{
		printf("\nP%d value=",i+1);
		scanf("%f",&v[i]);
	}
	printf("enter the max weight you can take:");
	scanf("%f",&mv);
	ks(w,v,mv,n);
}
