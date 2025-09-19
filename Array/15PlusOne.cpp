// Given a non-negative integer(without leading zeroes) represented as an array arr. Your task is to add 1 to the number (increment the number by 1). The digits are stored such that the most significant digit is at the starting index of the array.

// Examples:

// Input: arr[] = [5, 6, 7, 8]
// Output: [5, 6, 7, 9]
// Explanation: 5678 + 1 = 5679
// Input: arr[] = [9, 9, 9]
// Output: [1, 0, 0, 0]
// Explanation: 999 + 1 = 1000

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        int n=arr.size();
        reverse(arr.begin(),arr.end());
        int i=0;
        
        while(i<n && arr[i]==9)
        {
            arr[i++]=0;
        }
        if(i==n)arr.push_back(1);
        else{
            arr[i]++;
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};