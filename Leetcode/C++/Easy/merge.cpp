/*
Problem:    Merge Sorted Array
Date:       Jan 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/merge-sorted-array/

Question:
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
The number of elements initialized in nums1 and nums2 are m and n respectively. You may assume that nums1 has enough space (size that is equal to m + n) 
to hold additional elements from nums2.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
 

Constraints:
0 <= n, m <= 200
1 <= n + m <= 200
nums1.length == m + n
nums2.length == n
-10^9 <= nums1[i], nums2[i] <= 10^9
*/


namespace{
    class Solution {
    public:
        /*void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            long ptr1=0,ptr2=0;                               //Merge sort using 3rd array
            vector<int> nums;
            while(ptr1<m && ptr2<n){
                if(nums1[ptr1] < nums2[ptr2])
                    nums.push_back(nums1[ptr1++]);
                else
                    nums.push_back(nums2[ptr2++]);
            }
            while(ptr1<m){
                    nums.push_back(nums1[ptr1++]);            
            }
            while(ptr2<n){
                    nums.push_back(nums2[ptr2++]);
            }
            nums1=nums;
        }*/
        
        /*void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            copy(nums2.begin(), nums2.end(), nums1.begin()+m);          //STL Solution
            sort(nums1.begin(), nums1.end());
        }*/
        
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
            int ptr1=m-1,ptr2=n-1,ptr=n+m-1;                    //Inplace Solution
            while(ptr1>=0 && ptr2>=0){
                if(nums1[ptr1]>nums2[ptr2])
                    nums1[ptr--]=nums1[ptr1--];
                else
                    nums1[ptr--]=nums2[ptr2--];
            }
            while(ptr1>=0){
                    nums1[ptr--]=nums1[ptr1--];
            }
            while(ptr2>=0)
                    nums1[ptr--]=nums2[ptr2--];
        }
        
    };    
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                cin.tie(nullptr);cout.tie(nullptr);
                                return nullptr;}();
}
