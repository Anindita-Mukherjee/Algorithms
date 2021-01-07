//assignment problem
#include<stdio.h>

int main()
{
	int n,m,a[6][6],b[6][6],i,j,f=0,min,max;
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
		{
			b[i][j]=0;
			a[i][j]=0;
		}
	printf("enter the number of rows(1-5)  ");
	scanf("%d",&n);
	printf("enter the number of columns(1-5)  ");
	scanf("%d",&m);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			printf("element[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
			
	if(n<m)
		n++;
	if(m<n)
		m++;
	printf("Is it a maximization problem?...Press 1 for Maximization and 0 for minimization \n");
	scanf("%d",&f);
	max=a[0][0];
	if(f)
	{
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i][j]>max)
					max=a[i][j];
		
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				a[i][j]=max-a[i][j];
	}
	
	printf("The row Reduction Matrix is:\n");
		for(i=0;i<n;i++)
		{
			min=a[i][0];
			for(j=1;j<m;j++)
				if(a[i][j]<min)
					min=a[i][j];
			for(j=0;j<m;j++)
			{
				b[i][j]=(a[i][j]-min);
				printf("%d  ",b[i][j]);
			}
			printf("\n");
		}
	printf("The Column Reduction Matrix is:\n");
	min=b[0][0];
	for(j=0;j<m;j++)
	{
		min=b[0][j];
		for(i=1;i<n;i++)
		
			if(b[i][j]<min)
				min=b[i][j];
		for(i=0;i<n;i++)
			b[i][j]=b[i][j]-min;
		
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d  ",b[i][j]);	
		printf("\n");
	}
	return 0;
}
