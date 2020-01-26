#include <stdio.h>
/*
this program can be used to calculate the product of two matrices(rectangular or square)
*/
int main()
{
int order_1a,order_1b,order_2a,order_2b;
int sum=0;
printf("This program will multiply two matrices\n");
printf("Enter the order of the first matrix in the form \"i j\" where i and j are the number of rows and columns in matrix 1 separated by a space\n");
scanf("%d %d",&order_1a,&order_1b);
printf("Enter the order of the second matrix in the form \"i j\" where i and j are the number of rows and columns in matrix 2 separated by a space\n");
scanf("%d %d",&order_2a,&order_2b);
if(order_1b!=order_2a)
{
printf("Multiplication not possible!");
}
else
{int matrix1[order_1a][order_1b], matrix2[order_2a][order_2b];
printf("Enter the elements of matrix 1 one-by-one\n");
for(int i=0;i<order_1a;i++)
{
	for(int j=0;j<order_1b;j++)
	{
	    matrix1[i][j]=0;
		scanf("%d",&matrix1[i][j]);
	}
}
printf("Enter the elements of matrix 2 one-by-one\n");
for(int i=0;i<order_2a;i++)
{
	for(int j=0;j<order_2b;j++)
	{
	    matrix2[i][j]=0;
		scanf("%d",&matrix2[i][j]);
	}
}
printf("Resultant matrix is:\n");
for(int i=0;i<order_1a;i++)
{
    for(int j=0;j<order_2b;j++)
    {   sum=0;
        for(int k=0;k<order_2a;k++)
        {
          sum+=matrix1[i][k]*matrix2[k][j];
        }
     printf("%d ",sum);
    }
    printf("\n");
}


}


return 0;
}
