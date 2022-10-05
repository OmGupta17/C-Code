#include<iostream>

// CPP program to find mean and median of
// an array
#include <bits/stdc++.h>
using namespace std;

int mean(int arr[],int n)
{
	int sum=0;
	int m=0;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
		m=sum/n;
	}
	return m;
	
}
int median(int arr[] , int n)
{
	sort(arr,arr+n);
	
	if(n%2==0)
	
		return arr[n/2];
	
return (arr[n-1]/2) ;
}
int main()
{
	int arr[]={5,8,6,4,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Mean is:"<<mean(arr,n)<<"\n";
	cout<<"Median is:"<<median(arr,n);
}
