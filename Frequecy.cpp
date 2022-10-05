#include<iostream>
using namespace std;

int Frequencies(int arr[] , int n)
{
	int freq=1,i=1;
	while(i < n)
	{
		while(i< n && arr[i] ==arr[i-1])
		{
			freq++;
			i++;
		}
		
		cout<<arr[i - 1] << " " << freq << endl;

		i++;
		freq = 1;
	}
}
int main()
{
	int arr[] = {5,6,8,9,9};
	int n=5;
	cout<<	Frequencies(arr,n);;
	
}
