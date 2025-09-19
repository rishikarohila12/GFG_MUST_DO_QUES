#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
       
        int n = arr.size();
 
    sort(arr.begin(), arr.end());
    
   
    return arr[n-3];
    }
};