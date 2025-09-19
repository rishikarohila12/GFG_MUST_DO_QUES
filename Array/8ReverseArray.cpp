#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        reverse(arr.begin(),arr.end());
    }
};