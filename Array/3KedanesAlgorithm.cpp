#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxsum=0;
        int currsum=0;
        for(int i=0;i<arr.size();i++)
        {
            currsum+=arr[i];
            maxsum=max(currsum,maxsum);
            if(currsum<0)
            currsum=0;
        }
    return maxsum;    
    }
};