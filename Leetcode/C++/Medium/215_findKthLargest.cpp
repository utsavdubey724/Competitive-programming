/*
Problem:    215. Kth Largest Element in an Array
Date:       Jan 22, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/kth-largest-element-in-an-array/

Question:
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:
Input: [3,2,1,5,6,4] and k = 2
Output: 5

Example 2:
Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4

Note:
You may assume k is always valid, 1 ≤ k ≤ array's length.
*/


namespace{
    class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            priority_queue<int> pq(nums.begin(),nums.end());
            int temp=1;
            while(temp!=k){
                pq.pop();
                temp++;
            }
            return pq.top();
        }
        /*int findKthLargest(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
            return nums[nums.size()-k];
        }*/
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
