/*
Problem:    Single Number
Date:       Jan 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/single-number/

Question:
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1
 

Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/


namespace{
    class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans=0;
            for(int i=0;i<nums.size();i++){
                cout<<ans<<"^"<<nums[i]<<"=";
                ans=ans ^ nums[i];
                cout<<ans<<endl;
            }
            cout<<endl;
            return ans;
        }
        /*int singleNumber(vector<int>& nums) {
            unordered_map<int,int> myMap;
            for(int i=0;i<nums.size();i++)
                myMap[nums[i]]++;
            for(int i=0;i<nums.size();i++){
                int current=nums[i];
                auto it=myMap.find(current);
                if(it->second==1)
                    return it->first;
            }
            return {};
        }*/
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
