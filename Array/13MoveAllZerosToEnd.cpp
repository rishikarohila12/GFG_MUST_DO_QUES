// // You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0)
            {
                arr[j]=arr[i];
                j++;
            }
        }
        while(j<arr.size())
        {
            arr[j]=0;
            j++;
        }
    }
};