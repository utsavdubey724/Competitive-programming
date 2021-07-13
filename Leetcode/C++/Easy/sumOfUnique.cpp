/*
Problem:    1748. Sum of Unique Elements
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sum-of-unique-elements/

Question:
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.

Example 1:
Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.

Example 2:
Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.

Example 3:
Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
 

Constraints:
1 <= nums.length <= 100
1 <= nums[i] <= 100
*/


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_map<int,int> myMap;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            myMap[nums[i]]++;
        for(auto it : myMap)
            if(it.second==1)
                sum+=it.first;
        return sum;
    }
};
