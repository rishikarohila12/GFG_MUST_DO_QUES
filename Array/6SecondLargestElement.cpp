#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

// --------------------1 method ----------------------


// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int max=INT_MIN;
//         int smax=INT_MIN;
//         for(int i=0;i<arr.size();i++)
//         {
            
//                 if(arr[i]>max)
//                 {
//                     max=arr[i];
//                 }
            
//         }
//         for(int i=0;i<arr.size();i++)
//         {
//             if(arr[i]!=max && arr[i]>smax)
//             {
//                 smax=arr[i];
//             }
//         }
//         if(smax==INT_MIN)
//         {
//             return -1;
//         }
//         return smax;
//     }
// };



// --------- 2 method----------------

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]!=arr[arr.size()-1])
            return arr[i];
        }
        return -1;
    }
};