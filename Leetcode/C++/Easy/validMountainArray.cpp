/*
Problem:    941. Valid Mountain Array
Date:       July 09, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-mountain-array/

Question:
Given an array of integers arr, return true if and only if it is a valid mountain array.
Recall that arr is a mountain array if and only if:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:
Input: arr = [2,1]
Output: false

Example 2:
Input: arr = [3,5,5]
Output: false

Example 3:
Input: arr = [0,3,2,1]
Output: true
 
Constraints:
1 <= arr.length <= 104
0 <= arr[i] <= 104
*/


class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(0),cin.tie(0);
        if(arr.size()<3)
            return false;
        int flag1=0,flag2=0,top;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                flag1=1;
                continue;
            }
            else if(arr[i]>arr[i+1]){
                top=i;
                break;
            }
            else
                return false;
        }
        for(int i=top;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                flag2=1;
                continue;
            }
            else if(arr[i]<arr[i+1]){
                return false;
                flag2=0;
                break;
            }
            else
                return false;            
        }
        if(flag1==1 && flag2==1)
            return true;
        return false;
        
    }
};
