/*
Problem:    26. Remove Duplicates from Sorted Array
Date:       Jan 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Question:
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Clarification:
Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
 

Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
 

Constraints:
0 <= nums.length <= 3 * 104
-104 <= nums[i] <= 104
nums is sorted in ascending order.
*/


namespace{
    class Solution {
    public:
        /*int removeDuplicates(vector<int>& nums) {
            if(nums.size()<2)
                return nums.size();
            for(int i=0;i<nums.size();i++){
                while(i<nums.size()-1 && nums[i+1]==nums[i])
                    nums.erase(nums.begin()+i+1);
            }
            return nums.size();
        }*/
        int removeDuplicates(vector<int>& nums) {
            if(nums.size()<2)
                return nums.size();
            int index=1;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]!=nums[i+1])
                    nums[index++]=nums[i+1];
            }
            return index;
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                     cin.tie(nullptr);cout.tie(nullptr);
                                     return nullptr;}();
}