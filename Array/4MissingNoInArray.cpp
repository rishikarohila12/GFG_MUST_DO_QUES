#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        int actual=n*(n+1)/2;
        int sum=0;
        for(auto x:arr)
        {
            sum+=x;
        }
        int missing=abs(actual-sum);
        return missing;
    }
};