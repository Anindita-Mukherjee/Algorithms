#include <stdio.h>
#include <stdlib.h>
int Assign[20][20],row_min[20],col_min[20],row_reduced[20][20],col_reduced[20][20], r_min, c_min, r, c;
int main()
{
    printf("Enter the dimensions of the Assignment matrix(Row then Column):\n");
    scanf("%d", &r);
    scanf("%d", &c);
    int i, j;

   		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("Enter value at cell [%d][%d]= ",i+1,j+1);
				scanf("%d", &Assign[i][j]);

			}
		}

		
		if (r!=c)
        {
            printf("\nThe matrix is unbalanced. ");
            if (r<c)
            {
                printf("We add a dummy row.\n");
                for (j=0;j<c;j++)
                {
                    Assign[r][j]=0;
                }
                r+=1;
            }
            else if (r>c)
            {
                printf("/nWe add a dummy column.\n");
                for (i=0;i<r;i++)
                {
                    Assign[i][c]=0;
                }
                c+=1;
            }

        }
       
		
		for (i=0;i<r;i++)
		{
            r_min=Assign[i][0];
            for (j=1;j<c;j++)
			{
                if (Assign[i][j]<r_min)
                r_min=Assign[i][j];
            }
            row_min[i]=r_min;
		}
		printf("\nRow min values: \n");
        for (i=0;i<r;i++)
			printf("%d \t",row_min[i]);
		printf("\n");

		
		 for (i=0;i<r;i++)
		{
            //val=row_min[i];
			for (j=0;j<c;j++)
			{
				row_reduced[i][j]=Assign[i][j]-row_min[i];
				//printf("%d \t", row_reduced[i][j]);
			}
        }

		
		printf("\nThe Row Reduced Matrix: \n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d \t", row_reduced[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		for (j=0;j<c;j++)
		{
            c_min=row_reduced[0][j];
            for (i=1;i<r;i++)
			{
                if (row_reduced[i][j]<c_min)
                c_min=row_reduced[i][j];
            }
            col_min[j]=c_min;
		}
		printf("\nColumn min values: \n");
        for (j=0;j<c;j++)
			printf("%d \t",col_min[j]);
        printf("\n");

        
		 for (j=0;j<c;j++)
		{
            //val=col_min[j];
			for (i=0;i<r;i++)
			{
				col_reduced[i][j]=row_reduced[i][j]-col_min[j];
				//printf("%d \t", row_reduced[i][j]);
			}
        }

        
		printf("\nThe Column Reduced Matrix: \n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d \t", col_reduced[i][j]);
			}
			printf("\n");
		}
		printf("\n");

 return 0;
 }
