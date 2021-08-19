/*
Problem:    349. Intersection of Two Arrays
Date:       Jan 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/intersection-of-two-arrays/

Question:
Given two arrays, write a function to compute their intersection.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Note:
Each element in the result must be unique.
The result can be in any order.
*/


namespace{
    class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int> myMap;
            for(int i=0;i<nums1.size();i++)
                myMap[nums1[i]]++;
            unordered_set<int> mySet;
            for(int i=0;i<nums2.size();i++){
                if(myMap.find(nums2[i]) != myMap.end())
                    mySet.insert(nums2[i]);
            }
            vector<int> v(mySet.begin(),mySet.end());
            return v;
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
