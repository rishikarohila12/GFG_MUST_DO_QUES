#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int countTriplet(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
       int count=0;
       int n=arr.size();
       for(int k=n-1;k>=0;k--)
       {
           int i=0;
           int j=k-1;
           while(i<j)
           {
               int sum=arr[i]+arr[j];
               if(sum<arr[k])
               {
                   i++;
               }
               else if(sum>arr[k])
               j--;
               else if(sum==arr[k])
               {
                   count++;
                   i++;
                   j--;
               }
           }
       }
       return count;
        
    }
};