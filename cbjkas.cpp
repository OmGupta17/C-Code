#include<iostream>
using namespace std;

int merge(int arr1[],int m,int arr2[],int n,int arr3[],int k)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
	return arr3[i];
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int arr2[]={7,8,9,10};
	int n=sizeof(arr2)/sizeof(arr2[0]);

	int k=m+n;
		int arr3[k];
	
	merge(arr1,m,arr2,n,arr3,k);
	cout<<	merge(arr1,m,arr2,n,arr3,k)<<" ";
}
