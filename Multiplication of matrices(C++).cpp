#include <iostream>

using namespace std;
/*
this program can be used to calculate the product of two matrices(rectangular or square)
*/
int main()
{
int order_1a,order_1b,order_2a,order_2b;
int sum=0;
cout<<"This program will multiply two matrices"<<endl;
cout<<"Enter the order of the first matrix in the form \"i j\" where i and j are the number of rows and columns in matrix 1 separated by a space"<<endl;
cin>>order_1a>>order_1b;
cout<<"Enter the order of the second matrix in the form \"i j\" where i and j are the number of rows and columns in matrix 2 separated by a space"<<endl;
cin>>order_2a>>order_2b;
if(order_1b!=order_2a)
{
cout<<"Multiplication not possible!"<<endl;
}
else
{int matrix1[order_1a][order_1b], matrix2[order_2a][order_2b];
cout<<"Enter the elements of matrix 1 one-by-one"<<endl;
for(int i=0;i<order_1a;i++)
{
	for(int j=0;j<order_1b;j++)
	{
	    matrix1[i][j]=0;
		cin>>matrix1[i][j];
	}
}
cout<<"Enter the elements of matrix 2 one-by-one"<<endl;
for(int i=0;i<order_2a;i++)
{
	for(int j=0;j<order_2b;j++)
	{
	    matrix2[i][j]=0;
		cin>>matrix2[i][j];
	}
}
cout<<"Resultant matrix is:"<<endl;
for(int i=0;i<order_1a;i++)
{
    for(int j=0;j<order_2b;j++)
    {   sum=0;
        for(int k=0;k<order_2a;k++)
        {
          sum+=matrix1[i][k]*matrix2[k][j];
        }
     cout<<sum<<" ";
    }
    cout<<endl;
}


}


return 0;
}
