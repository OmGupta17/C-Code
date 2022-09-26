#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
int kth_Smallest_element(int arr[], int N, int K)
{
 set<int> s;
 for (int i = 0; i<=N-1; i++)
  s.insert(arr[i]);
 
 auto it= s.begin();
 for (int i = 0; i<=K - 1; i++)
 it++;
 return *it;
}
 
int main()
{
 int arr[] = { 12, 3, 5, 7, 3, 19,20,6,8,4 };
 int N = sizeof(arr) / sizeof(arr[0]), 
 int K = 2;
 cout << "K'th smallest element is "<< kth_Smallest_element(arr, N, K);
 return 0;
}
