/*
Problem:    697. Degree of an Array
Date:       July 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/degree-of-an-array/

Question:
Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

Example 1:
Input: nums = [1,2,2,3,1]
Output: 2
Explanation: 
The input array has a degree of 2 because both elements 1 and 2 appear twice.
Of the subarrays that have the same degree:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
The shortest length is 2. So return 2.

Example 2:
Input: nums = [1,2,2,3,1,4,2]
Output: 6
Explanation: 
The degree is 3 because the element 2 is repeated 3 times.
So [2,2,3,1,4,2] is the shortest subarray, therefore returning 6.
 

Constraints:
nums.length will be between 1 and 50,000.
nums[i] will be an integer between 0 and 49,999.
*/


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {           //To be improved
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        unordered_map<int,int> myMap;
        int n=nums.size();
        for(int i=0;i<n;i++)        //Storing frequency
            myMap[nums[i]]++;
        
        int deg=0;              //Finding degree
        for(auto it : myMap){
            if(it.second>deg){
                deg=it.second;
            }
        }
        vector<int> same;           //Finding elements with same degree
        for(auto it : myMap){
            if(it.second==deg){
                same.push_back(it.first);
            }
        }
        
        int sn=same.size();         //Finding smallest subarray
        int first,last,len=INT_MAX;
        int temp=sn;
        while(temp--){
            for(int i=0;i<n;i++){
                if(nums[i]==same[temp]){
                    first=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(nums[i]==same[temp]){
                    last=i;
                    break;
                }
            }
            if(last-first+1<len)
                len=last-first+1;
        }    
        return len;
    }
};
