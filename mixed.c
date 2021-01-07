//SADDLE POINT or mixed srategy
	#include<stdio.h>
	int main()
	{
	int r[5],c[5],mat[5][5];
	int i,j,n,m,min=0,max=0,row,column,d,x1,x2,y1,y2,v;
	char ch;
	do
	{
		for(i=0;i<5;i++)
		{
			r[i]=0;
			c[i]=0;
			for(j=0;j<5;j++)
				mat[i][j]=0;
		}
	printf("Enter number of rows(1-5)=");
	scanf("%d",&n);
	printf("Enter number of columns(1-5)=");
	scanf("%d",&m);
	printf("Enter elements of matrix -->\n");
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				printf("matrix[%d][%d]=",i,j);
				scanf("%d",&mat[i][j]);
			}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d",mat[i][j]);
		printf("\n");	
	}		
	
	for(i=0;i<n;i++)
	{
		min=mat[i][0];
		for(j=1;j<m;j++)
			if(mat[i][j]<min)	
				min=mat[i][j];
		r[i]=min;
	}
	for(j=0;j<m;j++)
	{
		max=mat[0][j];
		for(i=1;i<n;i++)
			if(mat[i][j]>max)	
				max=mat[i][j];
		c[j]=max;
	}
	max=r[0];
	min=c[0];
	for(i=1;i<n;i++)
	{
		if(r[i]>max)
		{
			max=r[i];
			row=i;
		}
	}
	for(i=1;i<m;i++)
	{
		if(c[i]<min)
		{
			min=c[i];
			column=i;
		}
			
	}
	if(max==min)
	{
		printf("saddle point found at %d  %d   ",row,column);
		printf("The optimal value is %d  ",min);
	}
	else
	{
		d=(mat[0][0]+mat[1][1])-(mat[0][1]+mat[1][0]);
		x1=(mat[1][1]-mat[1][0])/d;
		printf("%d",x1);
		x2=(mat[0][0]-mat[0][1])/d;
		printf("%d",x2);
		y1=(mat[1][1]-mat[0][1])/d;
		printf("%d",y1);
		y2=(mat[0][0]-mat[1][0])/d;
		printf("%d",y2);
		v=((mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]))/d,
		printf("%d",v);
		
	}
	
	printf("Do you want to continue(Y/N?) :");
	scanf("%d",&ch);
	}while(ch=='y' || ch=='Y');
	return 0;
	}




