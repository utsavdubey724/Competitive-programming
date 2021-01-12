/*
Problem:    Squares of a Sorted Array
Date:       Jan 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/squares-of-a-sorted-array/

Question:
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
*/


class Solution {
public:
    //Method 1
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int positive=0;
        while(positive<n && nums[positive]<0)
            positive++;
        int negative=positive-1;
        vector<int> ans;
        while(negative>=0 && positive <n){
            int left=nums[negative]*nums[negative];
            int right=nums[positive]*nums[positive];
            if(left<right){
                ans.push_back(left);
                negative--;
            }
            else{
                ans.push_back(right);
                positive++;
            }
        }
        while(negative>=0)
            ans.push_back(nums[negative]*nums[negative--]);
        while(positive<n)
            ans.push_back(nums[positive]*nums[positive++]);
        return ans;
    }
    
    //Method 2
    /*vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left=0,right=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[left])>nums[right])
                ans[i]=nums[left]*nums[left++];
            else
                ans[i]=nums[right]*nums[right--];
        }
        return ans;
    }*/
    
    //Method 3
    /*vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]*nums[i];
        sort(nums.begin(),nums.end());
        return nums;
    }*/
};
