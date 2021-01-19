/*
Problem:    169. Majority Element
Date:       Jan 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/majority-element/

Question:
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-231 <= nums[i] <= 231 - 1
 
Follow-up: Could you solve the problem in linear time and in O(1) space?
Ans: Boyer-Moore Voting Algorithm
*/


namespace{
    class Solution {
    public:
        //Boyer-Moore Voting Algorithm 
        int majorityElement(vector<int>& nums) {    //Time Complexity: O(n)
            int candidate=nums[0];                  //Space Complexity: O(1)
            int count=1;
            for(int i=1;i<nums.size();i++){
                if(count==0)
                    candidate=nums[i];
                if(candidate==nums[i])
                    count++;
                else
                    count--;
            }
            return candidate;
        }
        
        //Using sorting
        /*int majorityElement(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            return (nums[n/2]);
        }*/
        
        //Using Hashmap
        /*int majorityElement(vector<int>& nums) {    
            unordered_map<int,int> myMap;
            for(int i=0;i<nums.size();i++)
                myMap[nums[i]]++;
            for(int i=0;i<nums.size();i++){
                auto it=myMap.find(nums[i]);
                int count=it->second;
                if(it->second>nums.size()/2)
                    return it->first;
            }
            return {};
        }*/
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
