#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here method 2 juggling method 
        int n=arr.size();
        d%=n;
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        
        // ---------method 2--------


        // for(int i=0;i<d;i++)
        // {
        //     int first=arr[0];
        //     for(int j=0;j<arr.size();j++)
        //     {
                
        //         arr[j]=arr[j+1];
        //     }
        //     arr[arr.size()-1]=first;
        // }
        
    }
};