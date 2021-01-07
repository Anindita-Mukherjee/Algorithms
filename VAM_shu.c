//VAM
#include<stdio.h>
#include<limits.h>
int n,m,a[6][6],i,j,min1,min2;
int x[6];	
int main()
{

	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
		{
			a[i][j]=0;
		}
	printf("enter the number of rows(1-5)=");
	scanf("%d",&n);
	printf("enter the number of columns(1-5)=");
	scanf("%d",&m);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
				printf("matrix[%d][%d]=",(i+1),(j+1));
				scanf("%d",&a[i][j]);
		}
	if(n<m)
		n++;
	if(m<n)
		m++;
			//Calculating Row Penalty
		for (i=0;i<n;i++)
		{
		    min1=INT_MAX;
            min2=INT_MAX;
			for (j=0;j<m;j++)
			{
				if (a[i][j]<min1)
                {
                    min2=min1;
                    min1=a[i][j];
                }
                else if (a[i][j]<min2)
                {
                    min2=a[i][j];
                }

			}
			printf("\nRow penalty of row %d = %d\n",(i+1), (min2-min1));
		}
	//Calculating Column Penalty
		for (j=0;j<m;j++)
		{
		    min1=INT_MAX;
            min2=INT_MAX;
			for (i=0;i<n;i++)
			{
				if (a[i][j]<min1)
                {
                    min2=min1;
                    min1=a[i][j];
                }
                 else if (a[i][j]<min2)
                {
                    min2=a[i][j];
                }

			}
			printf("\nColumn penalty of column %d = %d\n",(j+1), (min2-min1));
		}
	}
	
