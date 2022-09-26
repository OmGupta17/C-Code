#include <bits/stdc++.h>   
using namespace std; 
  
// function which find number 
int singleNumber(int nums[],int n) 
{ 
    long sum1 = 0,sum2 = 0; 
  
    for(int i = 0; i < n; i++) 
    { 
        if(nums[i] == 0) 
        { 
            sum1 += nums[i]; 
            nums[i]++; 
        } 
        sum2 += nums[i]; 
    } 
      
    // applying the formula. 
    return 2 * (sum1) - sum2; 
} 
  
// Driver code 
int main() 
{ 
    int a[] = {2, 3, 5, 4, 5, 3, 4}; 
    int n = 7; 
    cout << singleNumber(a,n) << ""; 
  

    return 0; 
} 
