#include<iostream>
using namespace std;

int Reversearray(int arr[],int n)
{
	int low=0 , high = n-1;
	while(low<high)
	{
		int temp=0;
		temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		
		low++;
		high--;
	}
}
int main()
{
	int arr[]={10,6,8,7,9,5};
	int n=6;
	Reversearray(arr,n);
	       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
	
}
