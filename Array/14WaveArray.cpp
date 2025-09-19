// Given an sorted array arr[] of integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5] ..... and so on. If there are multiple solutions, find the lexicographically smallest one.

// Note: The given array is sorted in ascending order, and modify the given array in-place without returning a new array.

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [2, 1, 4, 3, 5]
// Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size()-1;i+=2)
        {
            swap(arr[i],arr[i+1]);
            
        }
    }
};

