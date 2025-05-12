#include<iostream>
using namespace std;

#define n 10

typedef int (*arr)[10];

arr getarray()
{
	static int arr[n][n]={10,1,2,3,4,5,6,7,8,9};
	return arr;
}

void printarray(int (*ptr)[n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<ptr[i][j]<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int (*arr)[10];
	arr=getarray();
	printarray(arr);
	return 0;
}




