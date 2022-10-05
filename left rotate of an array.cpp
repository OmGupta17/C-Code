#include<iostream>
using namespace std;

int leftrotate(int arr[],int n )
{

		int temp = arr[0];

	for(int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}

	arr[n - 1] = temp;
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
	leftrotate(arr,n);
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
