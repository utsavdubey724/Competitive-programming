/*
Problem:    350. Intersection of Two Arrays II
Date:       Jan 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/intersection-of-two-arrays-ii/

Question:
Given two arrays, write a function to compute their intersection.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]

Note:
Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.

Follow up:
What if the given array is already sorted? How would you optimize your algorithm?
What if nums1's size is small compared to nums2's size? Which algorithm is better?
What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
*/


namespace{
    class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            unordered_map<int,int> myMap;
            for(int i=0;i<nums1.size();i++){
                myMap[nums1[i]]++;
            }
            for(int i=0;i<nums2.size();i++){
                int current=nums2[i];
                auto it=myMap.find(current);
                if(it!=myMap.end()){
                    if(it->second>0)
                        ans.push_back(current);
                    myMap[current]--;
                }
            }
            return ans;
        }
        /*vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            for(int i=0;i<nums1.size();i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i]==nums2[j]){
                        ans.push_back(nums1[i]);
                        nums2.erase(nums2.begin()+j);   
                        break;
                    }
                }
            }
            return ans;
        }*/
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
