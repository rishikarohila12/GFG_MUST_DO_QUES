// Given an array arr[] consisting of only 0’s and 1’s, return count of the maximum number of consecutive 1’s or 0’s present in the array. 

// Input: arr[] = [0, 1, 0, 1, 1, 1, 1]
// Output: 4

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int noz=0,noo=0;int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                noz++;
            noo=0;
            }
             else
             {
                 noo++;
                 noz=0;
             }
            maxi=max(maxi,max(noz,noo));
            
            
        }
        return maxi;
    }
};