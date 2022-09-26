#include<iostream>
using namespace std;


int main()
{
	int arr[10],n,i,pos,temp=0,num;
	cout<<"Enter the number of arrays"<<"\n";
	cin>>n;
	cout<<"Enter the position where you want to enter the wlwment"<<"\n";
	cin>>pos;
	cout<<"Enter the number you want to enter the wlwment"<<"\n";
	cin>>num;
	for(i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(pos==arr[i])
		arr[i]=temp;
		temp=num;
		num=arr[i];
	}
	
	for(i=0;i<=n-1;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
