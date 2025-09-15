// Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target.

// Note: If no such array is possible then, return [-1].
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int left=0;
        int sum=0;
        for(int right=0;right<arr.size();right++)
        {
           sum+=arr[right];
           while(sum>target && left<right)
           {
               sum-=arr[left];
               left++;
               
           }
           if(sum==target)
           {
               return {left+1,right+1};
           }
        }
        return {-1};
        
    }
};