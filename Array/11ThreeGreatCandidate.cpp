// The hiring team aims to find 3 candidates who are great collectively. Each candidate has his or her ability expressed as an integer. 3 candidates are great collectively if the product of their abilities is maximum. Given the abilities of some candidates in an array, arr[], return the maximum collective ability from the pool of candidates.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(int a , int b)
  {
      return a>b;
  }
    

  class Solution {
  public:
  int maxProduct(vector<int> arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end(),comp);
        int option1=arr[0]*arr[1]*arr[2];
        int option2=arr[n-1]*arr[n-2]*arr[0];
        return max(option1,option2);
    }
};