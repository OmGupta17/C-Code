#include<iostream>
using namespace std;

int rigthrotate(int arr[],int n )
{

	int temp = arr[n-1];

	for(int i = 1; i < n-2; i++)
	{
		arr[i+1-1] = arr[i-1];
	}

	arr[0] = temp;
}
int main()
{
	int arr[]={3,5,7,4,9};
	int n=5;
	cout<<"Before rotation"<<"\n";
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" "<<"\n";
	}
	rigthrotate(arr,n);
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
