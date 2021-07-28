/*
Problem:    896. Monotonic Array
Date:       July 28, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/monotonic-array/

Question:
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 
Example 1:
Input: nums = [1,2,2,3]
Output: true

Example 2:
Input: nums = [6,5,4,4]
Output: true

Example 3:
Input: nums = [1,3,2]
Output: false

Example 4:
Input: nums = [1,2,4,5]
Output: true

Example 5:
Input: nums = [1,1,1]
Output: true
 

Constraints:
1 <= nums.length <= 10^5
-10^5 <= nums[i] <= 10^5
*/


class Solution {
public:
    bool isMonotonic(vector<int>& nums){        //Most Optimal
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size();
        if(n<3)
            return true;
        bool inc=true;
        bool desc=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                inc=false;
            if(nums[i]<nums[i+1])
                desc=false;
        }
        return inc || desc;
    }
    
    /*bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int flag;
        if(nums[0]==nums[n-1])
            flag=-1;
        else if(nums[0]<nums[n-1])
            flag=1;                         //Ascending
        else
            flag=0;                         //Descending
        
        int res=true;
        if(flag==1){
            for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1]){
                    res=false;
                    break;
                }
            }
        }
        else if(flag==0){
            for(int i=1;i<n;i++){
                if(nums[i]>nums[i-1]){
                    res=false;
                    break;
                }
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(nums[i] != nums[0]){
                    res=false;
                    break;
                }
            }
        }
        
        return res;
    }*/
    
    /*bool isMonotonic(vector<int>& nums) {         //Using Stack
        int n=nums.size();
        int flag,first=1;
        stack<int> s;
        bool res=true;
        for(int i=0;i<n;i++){
            if(first && s.empty()==false){
                if(nums[i]>s.top()){
                    flag=1;                     //ascending
                    first=0;                    //descending
                }
                else if(nums[i]<s.top()){
                    flag=0;
                    first=0;
                }
            }
            int prev=nums[i];
            if(s.empty()==false)
                prev=s.top();
            if(flag==1 && prev>nums[i]){
                res=false;
                break;
            }
            else if(flag==0 && prev<nums[i]){
                res=false;
                break;
            }
            s.push(nums[i]);
        }
        return res;
    }*/
    
    /*bool isMonotonic(vector<int>& nums) {             
        if(nums.size()<2)
            return true;
        
        int flag,idx=1;
        while(nums[idx] == nums[idx-1]){
            if(idx==nums.size()-1)
                break;
            idx++;
        }
        if(idx==nums.size()-1)
            return true;
        if(nums[idx]>nums[idx-1])
            flag=1;                 //ascending order
        else
            flag=0;                 //descending order
        
        
        bool result=true;
        if(flag==1){
            for(int i=idx;i<nums.size();i++){
                if(nums[i]>=nums[i-1])
                    continue;
                else{
                    result=false;
                    break;
                }
            }
        }
        else{
            for(int i=idx;i<nums.size();i++){
                if(nums[i]<=nums[i-1])
                    continue;
                else{
                    result=false;
                    break;
                }
            }
        }
        
        return result;
    }*/
};
