/*
Problem:    217. Contains Duplicate
Date:       Jan 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/contains-duplicate/

Question:
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:
Input: [1,2,3,1]
Output: true

Example 2:
Input: [1,2,3,4]
Output: false

Example 3:
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
*/


namespace{
    class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int,int> myMap;
            int flag=0;
            for(int i=0;i<nums.size();i++){
                if(myMap.find(nums[i])!=myMap.end()){
                    flag=1;
                    break;
                }
                else{
                    myMap[nums[i]]++;
                }
            }
            if(flag)
                return true;
            return false;
        }  
        /*bool containsDuplicate(vector<int>& nums) {
            set<int> mySet;
            for(int i=0;i<nums.size();i++)
                mySet.insert(nums[i]);
            return !(mySet.size()==nums.size());
        }*/
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
