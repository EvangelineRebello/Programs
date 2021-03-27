#include<iostream>
using namespace std;

int main()
{
	int row,col,i,j;
	cout<<"Enter the numbers of rows and columns:";
	cin>>row>>col;
	int mat[row][col];
	cout<<"Enter the elements of matrices :";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"Matrix one is :"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
